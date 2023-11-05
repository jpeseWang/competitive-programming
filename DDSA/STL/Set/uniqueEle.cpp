int differentNumbers(vector<int> inputVector)
{
    set<int> s(inputVector.begin(), inputVector.end());
    return s.size();
}