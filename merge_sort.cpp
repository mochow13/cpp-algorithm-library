void merge_sort(auto l, auto r)
{
    if(r-l>1)
    {
        auto mid=l+(r-l)/2;
        merge_sort(l,mid);
        merge_sort(mid,r);
        std::inplace_merge(l,mid,r);
    }
}

std::vector<int> collection = {2,4,4,1,1,3,9};
merge_sort(begin(collection), end(collection));