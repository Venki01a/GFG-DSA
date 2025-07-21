class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n1=arr.size();
        d=d%n1;
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
    }
};