std::vector<int> collection={1,2,0,5,0,3,4};

// itr contains the iterator to the first element following the specific property
auto itr = std::find_if(begin(collection), end(collection), [](int x) {
    return x%2==0; // the property
});