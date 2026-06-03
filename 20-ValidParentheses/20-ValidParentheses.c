// Last updated: 6/3/2026, 11:34:45 PM
struct stack
{
    char data[10000];
    int top;
};
typedef struct stack STACK;

void push(STACK *stack, char symbol)
{
    if (stack->top < 9999)
        stack->data[++(stack->top)] = symbol; 
}

char pop(STACK *stack)
{
    if (stack->top >= 0)
        return stack->data[(stack->top)--];
    return '\0';
}

bool isValid(char* s) {

    int i=0; 
    STACK *stack = (STACK*) malloc (sizeof(STACK)); stack->top = -1;
    while (s[i] != '\0')
    {
        char symbol = s[i]; char data;
        switch (symbol)
        {
            case '{':
            case '(':
            case '[':
                push(stack, symbol);
                break;
            
            case ')':
                if (stack->top == -1)
                    return false;
                data = pop(stack);
                if (data != '('){
                    free(stack);
                    return false;
                }
                break;

            case ']':
                if (stack->top == -1)
                    return false;
                data = pop(stack);
                if (data != '['){
                    free(stack);
                    return false;
                }
                break;

            case '}':
                if (stack->top == -1)
                    return false;
                data = pop(stack);
                if (data != '{'){
                    free(stack);
                    return false;
                }
                break;
        }
        i++;
    }
    if (stack->top == -1){
        free(stack);
        return true;
    }
    return false;   
}