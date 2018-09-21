std::vector<int> collection={1,2,0,5,0,3,4};

int counter=0;

// notice that we are capturing counter by reference
std::generate(begin(collection), end(collection), [&]() {
    return counter++;
});
// collection gets replaced by values starting from 0
// modified collection = {0,1,2,3,4,5,6}

