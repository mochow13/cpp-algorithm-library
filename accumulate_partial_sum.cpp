std::vector<int> collection={6,5,3,2,1,4,6,7};
// Note that we are providing 0 as the initial value, as it should be
// std::plus<int>() tells that the function should do sums
int sum = std::accumulate(begin(collection), end(collection), 0, std::plus<int>());
// What would happen if initial value was 0 instead of 1 in this call?
int prod = std::accumulate(begin(collection), end(collection), 1, std::multiplies<int>());
// You can also use your custom binary operation
// This also calculates summation. Note that at the beginning accumulate takes 
// the initial value (0) to the argument x, the first value in the collection (6) 
// to argument y, do the operation, then assigns it to the accumulated value. In the second call, 
// it pass the accumulated value to x and the next element in the collection to y, and thus proceeds.
int custom = std::accumulate(begin(collection), end(collection), 0, [](int x, int y) {
    return x+y;
});
// If you provide no binary operation, it will calculate the summation.