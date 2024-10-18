#include<bits/stdc++.h>
using namespace std;
    int e = 0;

bool isNonDegenerateTriplet(int a, int b, int c) {
    if (a + b > c && b + c > a && c + a > b) {
        return true;  // Non-degenerate triplet
    } else {
        return false; // Degenerate triplet
    }
}
long long combinations(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        // Calculate using the recurrence relation C(n, k) = C(n-1, k-1) + C(n-1, k)
        return combinations(n - 1, k - 1) + combinations(n - 1, k);
    }
}

// Function to calculate the number of ways to choose a triplet from n numbers
long long waysToChooseTriplet(int n) {
    // Use combinations formula: C(n, 3)
    return combinations(n, 3);
}
void getAllTriplets(int nums[], int n) {
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                //std::cout << "(" << nums[i] << ", " << nums[j] << ", " << nums[k] << ")\n";
                if(isNonDegenerateTriplet(nums[i],nums[j],nums[k]))    e++;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
long long x = waysToChooseTriplet(e);

cout<<x<<'\n';
    }

    return 0;
}