std::vector<int> collection={1,9,9,4,2,6};

// How many 9s are there in collection?
int nines=std::count(begin(collection),end(collection),9);
// How many elements of the collection are even?
int evens=std::count_if(begin(collection),end(collection),[](int x) {
    return x%2==0;
});
// nines equals 2, evens equals 3