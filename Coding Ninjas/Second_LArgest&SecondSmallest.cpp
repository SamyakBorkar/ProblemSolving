vector<int> getSecondOrderElements(int n, vector<int> a) {
    sort(a.begin(), a.end());
    
    int secondSmallest = a[1];
    int secondLargest = a[n-2];
    
    return {secondLargest, secondSmallest};
}
