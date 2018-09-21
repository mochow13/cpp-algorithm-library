std::string mirror_ends(const std::string& in)
{
    // mismatch takes two ranges as input, (first1,last1,first2,last2)
    // if last2 is not given, it considers first2+(last1-first1) as last2
    return std::string(in.begin(), std::mismatch(in.begin(), in.end(), in.rbegin()).first);
}
 
int main()
{
    std::cout << mirror_ends("abXYZba") << '\n'
              << mirror_ends("abca") << '\n'
              << mirror_ends("aba") << '\n';
}