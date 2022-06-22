//HARD Question
// given 2 sorted arrays
class Solution{
public:
	void merge(int a1[], int a2[], int n, int m) {
	    int i=n-1;// putting all the small elements in arr1
	    int j=0;// putting all the larger elements in arr2

	    while(i>=0 && j<m){
	        if(a1[i] > a2[j]){
	            swap(a1[i--],a2[j]);
	        }
	        j++;
	   }
	   sort(a1,a1+n);
	   sort(a2,a2+m);
	}
};
