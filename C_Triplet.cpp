#include <bits/stdc++.h>
using namespace std;
bool Vfind(vector<int>A, int arr_size, int sum)
{
	// Fix the first element as A[i]
	cout<<"\nENTERED FUNCTION\n";
	int iterate = 0;
	for (int i = 0; i < arr_size - 2; i++)
	{
		if(A[i]>=sum) continue;
		unordered_set<int> s;


		int curr_sum = sum - A[i];
		for (int j = i + 1; j < arr_size; j++)
		{
			if(A[j]>=sum) continue;

			iterate++;
			int required_value = curr_sum - A[j];
			if (s.find(required_value) != s.end())
			{
				printf("Triplet is %d, %d, %d", A[i], A[j],
					   required_value);
				return true;
			}
			s.insert(A[j]);
		}
	}
	cout<<" "<<iterate<<" ";

	return false;
}
// int countPrimeSum(vector<int> A, int arr_size, int sum)
// {
// 	int cp = 0;

// 	for (int i = 0; i < arr_size - 2; i++)
// 	{
// 		// if (A[i] >= sum)
// 		// 	continue;
// 		for (int j = i + 1; j < arr_size - 1; j++)
// 		{
// 			// if (A[j] >= sum)
// 			// 	continue;
// 			for (int k = j + 1; k < arr_size; k++)
// 			{
// 				// if (A[k] >= sum)
// 				// 	continue;
// 				if (A[i] + A[j] + A[k] == sum)
// 				{
// 					cp++;
// 				}
// 			}
// 		}
// 	}

// 	return cp;

// }

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> prime;
	prime.push_back(2);
	prime.push_back(3);
	for (int j = 1; j < n; j++)
	{
		int c = 0;
		if ((j % 2 == 0 || j % 3 == 0))
			continue;
		for (int i = 1; i * i < j; i++)
		{
			if (j % i == 0)
				c++;
		}
		if (c == 1)
		{
			prime.push_back(j);
		}
	}
	int cp = 0;
	int iterate = 0;
	//cout << prime.size();
	// for (int i = 0; i < prime.size() - 2; i++)
	// {
	// 	if (prime[i] >= n)
	// 		continue;
	// 	for (int j = i + 1; j < prime.size() - 1; j++)
	// 	{
	// 		if (prime[j] >= n)
	// 			continue;
	// 		for (int k = j + 1; k < prime.size(); k++)
	// 		{
	// 			iterate++;
	// 			if (prime[k] >= n)
	// 				continue;
	// 			if (prime[i] + prime[j] + prime[k] == n)
	// 			{
	// 				cp++;
	// 			}
	// 		}
	// 	}
	// }
	int l = 0, r = 0;
	// sort(prime.begin(),prime.end());
	// prime.insert(prime);
	for (int i = 0; i < prime.size() - 1; i++)
	{

		l = i + 1;
		r = prime.size()-1;
		while (l <= r)
		{
			iterate++;
			cout<<prime[i]<<" "<<prime[l]<<" "<<prime[r]<<'\n';
			cout<<i<<" "<<l<< " "<<r<<'\n'<<'\n';
			if (prime[i] + prime[l] + prime[r] == n)
			{
				cp++;
			}
			else if (prime[i] + prime[l] + prime[r] < n)
				l++;
			else
				r--;
		}
	}

	// Vfind(prime,prime.size(),n);
	// int ans = countPrimeSum(prime, prime.size(), n);
	cout << " " << cp << " " << iterate<<'\n';
	for (int i : prime)
	{
		cout << i << '\n';
	}
	return 0;
}

// void SieveOfEratosthenes(int n)
// {

// 	bool prime[n + 1];
// 	memset(prime, true, sizeof(prime));

// 	for (int p = 2; p * p <= n; p++) {
// 		if (prime[p] == true) {

// 			for (int i = p * p; i <= n; i += p)
// 				prime[i] = false;
// 		}
// 	}

// 	// Print all prime numbers
// 	for (int p = 2; p <= n; p++)
// 		if (prime[p])
// 			cout << p << " ";
// }

// // Driver Code
// int main()
// {
// 	int n = 30;
// 	cout << "Following are the prime numbers smaller "
// 		<< " than or equal to " << n << endl;
// 	SieveOfEratosthenes(n);
// 	return 0;
// }



