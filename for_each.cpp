std::vector<int> collection={2,4,4,1,1,3,9};

// notice that we pass x as reference!
std::for_each(begin(collection),end(collection),[](int &x) {
    x=x*26;
});