std::vector<int> collection = {3, 6, 12, 6, 9, 12};

// Are all numbers divisible by 3?
// divby3 should equal 1
bool divby3 = std::all_of(begin(collection), end(collection), [](int x) {
    return x % 3 == 0;
});

// Is any number divisible by 2?
// divby2 equals true
bool divby2 = std::any_of(begin(collection), end(collection), [](int x) {
    return x % 2 == 0;
});

// Is no number divisible by 6?
// divby6 equals false
bool divby6 = std::none_of(begin(collection), end(collection), [](int x) {
    return x % 6 == 0;
});