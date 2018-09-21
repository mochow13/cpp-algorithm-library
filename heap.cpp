void print_vector(auto &v)
{
    std::copy(begin(v), end(v), std::ostream_iterator<int>(std::cout, " "));
    std::cout<<'\n';
}

int main()
{
    std::vector<int> collection = {3,1,4,1,5,9};
    // makes a heap on collection
    std::make_heap(begin(collection), end(collection));

    std::cout<<"After making heap: ";
    print_vector(collection);

    // push_back 7 into our collection, heap is not re-oriented
    collection.push_back(7);

    std::cout<<"After push_back: ";
    print_vector(collection);

    // heap re-orienting
    std::push_heap(begin(collection), end(collection));

    std::cout<<"After push_heap: ";
    print_vector(collection);

    // moving the largest to the back
    std::pop_heap(begin(collection), end(collection));

    std::cout<<"After pop_heap: ";
    print_vector(collection);

    collection.pop_back();

    std::cout<<"After pop_back: ";
    print_vector(collection);
    // so the largest element is removed

    std::sort_heap(begin(collection), end(collection));

    std::cout<<"After sorting: ";
    print_vector(collection);
    
    return 0;
}