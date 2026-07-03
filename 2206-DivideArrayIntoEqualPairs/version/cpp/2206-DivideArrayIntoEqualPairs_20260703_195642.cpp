// Last updated: 7/3/2026, 7:56:42 PM
bool divideArray(vector<int>& nums) {
    bitset<501> bs;
    for(const int n:nums) bs.flip(n);
    return bs.none();
}