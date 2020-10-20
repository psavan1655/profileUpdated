////
////  main.cpp
////  gfg
////
////  Created by Savan Patel on 06/08/20.
////  Copyright © 2020 Savan Patel. All rights reserved.
////
//
//#include <iostream>
//
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//};
//
//
//void push(Node** head_ref, int new_data) {
//    Node* new_node = new Node();
//
//    new_node->data = new_data;
//    new_node->next = *head_ref;
//    *head_ref = new_node;
//}
//
//void middle_attack(Node** prev_node, int new_data) {
//    Node* new_node = new Node();
//    new_node->data = new_data;
//    new_node->next = *prev_node;
//    *prev_node = new_node;
//}
//
//void udado(Node** delete_node, int key) {
//    Node* temp = *delete_node;
//    Node* prev;
//
//    if(temp != NULL && temp->data == key) {
//        *delete_node = temp->next;
//        free(temp);
//        return;
//    }
//    while (temp != NULL && temp->data != key) {
//        prev = temp;
//        temp = temp->next;
//    }
//    if (temp == NULL) {
//        return;
//    }
//    prev->next = temp->next;
//    free(temp);
//}
//
//
//void seaching_ptr (Node* head_ref, int n) {
//    Node* main_ptr = head_ref;
//    Node* ref_ptr = head_ref;
//    int count = 0;
//    if(main_ptr != NULL) {
//        while (count < n) {
//            if(ref_ptr == NULL) cout << "Index range out of bound";
//            ref_ptr = ref_ptr->next;
//            count++;
//        }
//        while (ref_ptr != NULL) {
//            main_ptr = main_ptr->next;
//            ref_ptr = ref_ptr->next;
//        }
//        cout << "The data at " << n << " position is " << main_ptr->data << endl;
//    }
//}
//
//void deleteWhole(Node** head_ref) {
//    Node* current = *head_ref;
//    Node* next;
//    while (current != NULL) {
//        next = current->next;
//        free(current);
//        current = next;
//    }
//
//    head_ref = NULL;
//}
//
//
//void findMiddle (Node* head) {
//    Node* main_ptr = head;
//    Node* ref_ptr = head;
//
//    if(head != NULL) {
//        while (ref_ptr != NULL && ref_ptr->next != NULL) {
//            main_ptr = main_ptr->next;
//            ref_ptr = (ref_ptr->next)->next;
//        }
//        cout << "The middle one is " << main_ptr->data << endl;
//    }
//}
//
//
//bool search_key(Node** head_ref, int key) {
//    Node* temp = *head_ref;
//    while (temp != NULL) {
//        if (temp->data == key) {
//            return true;
//        }
//        temp = temp->next;
//    }
//    return false;
//}
//
//
//void nodeSwap(Node** head, int x, int y) {
//    Node* prevX = NULL;
//    Node* currX = *head;
//
//    if(x == y) return;
//
//    while (currX && currX->data != x) {
//        prevX = currX;
//        currX = currX->next;
//    }
//
//    Node* prevY = NULL, *currY = *head;
//    while (currY && currY->data != y) {
//        prevY = currY;
//        currY = currY->next;
//    }
//
//    if (currY == NULL || currX == NULL){
//        return;
//    }
//    if (prevX != NULL)
//        prevX->next = currY;
//    else {
//        *head = currY;
//    }
//
//    if (prevY->next != NULL){
//        prevY->next = currX;
//    } else {
//        *head = currX;
//    }
//
//    Node* tmp = currY->next;
//    currY->next = currX->next;
//    currX->next = tmp;
//}
//
//int main() {
//
//    Node* head;
//    Node* second;
//    Node* third;
//
//    head = new Node();
//
//
//    push(&head, 14);
//    push(&head, 20);
//    push(&head, 13);
//    push(&head, 12);
//    push(&head, 15);
//    push(&head, 10);
//
//    nodeSwap(&head, 12, 15);
//
//    Node* n = head;
//    while (n->next != NULL) {
//        cout << n->data << endl;
//        n = n->next;
//    }
//    return 0;
//}
//


//#include <iostream>
//
//using namespace std;
//
//class Node {
//
//public:
//    int data;
//    Node* left, *right;
//    Node(int t) {
//        data = t;
//        left = right = NULL;
//    }
//};
//
//class binaryTree {
//
//public:
//    Node* root;
//    binaryTree(int k){
//        root = new Node(k);
//    }
//    binaryTree() {
//        root = NULL;
//    }
//};
//
//int main() {
//    binaryTree* tree = new binaryTree();
//
//    tree->root = new Node(1);
//    tree->root->left = new Node(2);
//    tree->root->right = new Node(3);
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <numeric>
//
//using namespace::std;
//
//int max(int a, int b)
//{
//    return (a > b)? a : b;
//}
//
//int dpp(char a[], char n[], int x, int y) {
//
//    int dp[y+1][x+1];
//
//    for (int i=0; i<x+1; i++) {
//        for (int j=0; j<y+1; j++) {
//            if(i==0 || j==0) {
//                dp[i][j] = 0;
//            }
//            else if (a[i - 1] == n[j - 1]){
//                cout << a[i-1] << endl;
//                  dp[i][j] = dp[i - 1][j - 1] + 1;
//            }
//            else{
//              dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//            }
//          }
//        }
//    cout << "The max possible value is " << dp[x][y] << endl;
//    return dp[x][y];
//}
//
//
//int main() {
//    char a[] = "AGGTAB";
//    char b[] = "GXTXAYB";
//    int m = strlen(a);
//    int n = strlen(b);
//    dpp(a, b, m, n);
//    return 0;
//}



//#include <iostream>
//
//using namespace::std;
//
//int main() {
//    int a[] = {50, 3, 10, 7, 40, 80};
//    int n = sizeof(a)/sizeof(a[0]);
//    int count = 0;
//    int tmp = a[0];
//    for (int i=0; i<n; i++) {
//        if(a[i] >= tmp){
//            count = count + 1;
//            tmp = a[i];
//        }
//    }
//
//    cout << count << " Achieved goal" << endl;
//    return 0;
//}

//
//#include <iostream>
//#include <vector>
//
//
//using namespace::std;
//
//int main() {
//    vector<int> a;
//
//    a.push_back(10);
//    a.push_back(22);
//    a.push_back(9);
//    a.push_back(33);
//    a.push_back(21);
//    a.push_back(50);
//    a.push_back(41);
//    a.push_back(60);
//    int lis[a.size()];
//    for (int i=0; i<a.size(); i++) {
//        lis[i] = 1;
//    }
//
//    for (int i=1; i<a.size(); i++) {
//        for (int j=0; j<i; j++) {
//            if(a[i] > a[j] && lis[i] < lis[j] + 1){
//                lis[i] = lis[j] + 1;
//            }
//        }
//    }
//    int max_lis=0;
//    for (int i=0; i<a.size(); i++) {
//        if(lis[i] > max_lis)
//            max_lis = lis[i];
//    }
//    cout << "The longest subsequence is " << max_lis << endl;
//    return 0;
//}


//#include <iostream>
//#include <string>
//
//using namespace::std;
//
//int min(int x, int y, int z)
//{
//    return min(min(x, y), z);
//}
//
//int editDistDP(string str1, string str2, int m, int n) {
//    int dp[m+1][n+1];
//    for (int i=0; i<m+1; i++) {
//        for (int j=0; j<n+1; j++) {
//            if(i==0)
//                dp[i][j] = j;
//            else if(j==0)
//                dp[i][j] = i;
//            else if(str1[i-1] == str2[j-1]){
//                dp[i][j] = dp[i-1][j-1];
//            }
//            else {
//                dp[i][j] = min(dp[i-1][j], dp[i-1][j-1], dp[i][j-1]) + 1;
//            }
//        }
//    }
//    return dp[m][n];
//}
//
//int main() {
//    // your code goes here
//    string str1 = "food";
//    string str2 = "money";
//
//    cout << editDistDP(str1, str2, str1.length(), str2.length());
//    return 0;
//}
//
//
//#include <iostream>
//
//using namespace std;
//
//int printCountDP(int dist)
//{
//    int count[dist+1];
//
//    // Initialize base values. There is one way to cover 0 and 1
//    // distances and two ways to cover 2 distance
//    count[0]  = 1,  count[1] = 1,  count[2] = 2;
//
//    // Fill the count array in bottom up manner
//    for (int i=3; i<=dist; i++)
//       count[i] = count[i-1] + count[i-2] + count[i-3];
//
//    return count[dist];
//}
//
//// driver program
//int main()
//{
//    int dist = 7;
//    cout << printCountDP(dist);
//    return 0;
//}
//


//
//#include <iostream>
//
//#define n 3
//using namespace::std;
//
//// Returns length of the longest path beginning with mat[i][j].
//// This function mainly uses lookup table dp[n][n]
//int findLongestFromACell(int i, int j, int mat[n][n], int dp[n][n])
//{
//    if (i < 0 || i >= n || j < 0 || j >= n)
//        return 0;
//
//    // If this subproblem is already solved
//    if (dp[i][j] != -1)
//        return dp[i][j];
//
//    // To store the path lengths in all the four directions
//    int x = INT_MIN, y = INT_MIN, z = INT_MIN, w = INT_MIN;
//
//    // Since all numbers are unique and in range from 1 to n*n,
//    // there is atmost one possible direction from any cell
//    if (j < n - 1 && ((mat[i][j] + 1) == mat[i][j + 1]))
//        x = 1 + findLongestFromACell(i, j + 1, mat, dp);
//
//    if (j > 0 && (mat[i][j] + 1 == mat[i][j - 1]))
//        y = 1 + findLongestFromACell(i, j - 1, mat, dp);
//
//    if (i > 0 && (mat[i][j] + 1 == mat[i - 1][j]))
//        z = 1 + findLongestFromACell(i - 1, j, mat, dp);
//
//    if (i < n - 1 && (mat[i][j] + 1 == mat[i + 1][j]))
//        w = 1 + findLongestFromACell(i + 1, j, mat, dp);
//
//    // If none of the adjacent fours is one greater we will take 1
//    // otherwise we will pick maximum from all the four directions
//    return dp[i][j] = max(x, max(y, max(z, max(w, 1))));
//}
//
//// Returns length of the longest path beginning with any cell
//int finLongestOverAll(int mat[n][n])
//{
//    int result = 1; // Initialize result
//
//    // Create a lookup table and fill all entries in it as -1
//    int dp[n][n];
//    memset(dp, -1, sizeof dp);
//
//    // Compute longest path beginning from all cells
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (dp[i][j] == -1)
//                findLongestFromACell(i, j, mat, dp);
//
//            // Update result if needed
//            result = max(result, dp[i][j]);
//            cout << result << endl;
//        }
//    }
//
//    return result;
//}
//
//// Driver program
//int main()
//{
//    int mat[n][n] = { { 1, 2, 9 },
//                    { 5, 3, 8 },
//                    { 4, 6, 7 } };
//    cout << "Length of the longest path is "
//        << finLongestOverAll(mat);
//    return 0;
//}
//

//
//#include <iostream>
//using namespace std;
//
//// function to calculate sum between two indices
//// in array
//int sum(int arr[], int from, int to)
//{
//    int total = 0;
//    for (int i = from; i <= to; i++)
//        total += arr[i];
//    return total;
//}
//
//// bottom up tabular dp
//int findMax(int arr[], int n, int k)
//{
//    // initialize table
//    int dp[k+1][n+1];
//    for (int i = 0; i <= k; i++) { // 2 to n boards
//    for (int j = 0; j <= n; j++) {
//        dp[i][j] = 0;
//    }
//    }
//    // base cases
//    // k=1
//    for (int i = 1; i <= n; i++)
//        dp[1][i] = sum(arr, 0, i - 1);
//
//    // n=1
//    for (int i = 1; i <= k; i++)
//        dp[i][1] = arr[0];
//
//    // 2 to k partitions
//    for (int i = 2; i <= k; i++) { // 2 to n boards
//        for (int j = 2; j <= n; j++) {
//
//            // track minimum
//            int best = INT_MAX;
//
//            // i-1 th separator before position arr[p=1..j]
//            for (int p = 1; p <= j; p++)
//                best = min(best, max(dp[i - 1][p],
//                            sum(arr, p, j - 1)));
//
//            dp[i][j] = best;
//        }
//    }
//
//    for (int i = 0; i <= k; i++)
//    {
//      for (int j = 0; j <= n; j++)
//         printf ("%4d", dp[i][j]);
//      printf("\n");
//    }
//
//    // required
//    return dp[k][n];
//}
//
//// driver function
//int main()
//{
//    int arr[] = { 10, 20, 60, 50, 30, 40 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int k = 3;
//    cout << findMax(arr, n, k) << endl;
//    return 0;
//}

//
//#include <iostream>
//
//using namespace std;
//
//
//char* Solve (int N) {
//    int tmp=0;
//    for (int i=1;i<N;i++){
//        if (N%i==0) {
//            tmp = tmp+i;
//        }
//    }
//    if (tmp == N) {return "YES";}
//    else {
//        return "NO";
//    }
//}
//
//
//int main() {
//    int num;
//    cin >> num;                                        // Reading input from STDIN
//    for (int i=0; i<num; i++) {
//        int tmp;
//        cin >> tmp;
//        cout << Solve(tmp) << endl;
//    }
//}
//

//#include <iostream>
//
//using namespace::std;
//
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
//
//
//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        int carry=0;
//        ListNode* l3 = new ListNode(0);
//        ListNode** node= &l3;
//        while(l1->next != nullptr || l2->next != nullptr) {
//            int sum = 0;
//            sum = sum + ((l1 != nullptr) ? l1->val : 0);
//            sum = sum + ((l2 != nullptr) ? l2->val : 0);
//            sum += carry;
//            carry = sum/10;
//            (*node)=new ListNode(sum%10);
//            node = &((*node)->next);
//            if(l1!=nullptr) l1 = l1->next;
//            if(l2!=nullptr) l2 = l2->next;
//        }
//        if(carry > 0) {
//            (*node)=new ListNode(carry);
//            node = &((*node)->next);
//        }
//        while (l3 != nullptr) {
//            cout << l3->val;
//            l3 = l3->next;
//        }
//            return l3;
//    }
//};
//
//
//class Node
//{
//    public:
//    int key;
//    Node* next;
//};
//
///* Given a reference (pointer to pointer) to the head
//of a list and an int, push a new node on the front
//of the list. */
//void push(ListNode** head_ref, int new_key)
//{
//    /* allocate node */
//    ListNode* new_node = new ListNode();
//
//    /* put in the key */
//    new_node->val = new_key;
//
//    /* link the old list off the new node */
//    new_node->next = (*head_ref);
//
//    /* move the head to point to the new node */
//    (*head_ref) = new_node;
//}
//
//int main()
//{
//    /* Start with the empty list */
//    ListNode* head1 = nullptr;
//    ListNode* head2 = nullptr;
//
//
//    push(&head1, 2);
//    push(&head1, 4);
//    push(&head1, 3);
//    push(&head2, 5);
//    push(&head2, 6);
//    push(&head2, 4);
//    Solution trial;
//    trial.addTwoNumbers(head1, head2);
//    return 0;
//}

//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        vector<char> mapp;
//        int count = 0;
//        int n = s.length();
//        int i=0, j=0;
//        if (n == 0) return 0;
//        while (i<n && j<n){
//            if (find(mapp.begin(), mapp.end(), s[j]) == mapp.end()){
//                mapp.push_back(s[j++]);
//                count = max(count, j-i);
//            }
//            else {
//                mapp.erase(mapp.begin());
//                i++;
//            }
//        }
//        return count;
//    }
//};
//
//int main() {
//    Solution t;
//    cout << t.lengthOfLongestSubstring("pwwkew");
//    return 0;
//}
//

//
//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//
//    bool isPalindrome(string str)
//    {
//        // Start from leftmost and rightmost corners of str
//        int l = 0;
//        int h = str.length()-1;
//        // Keep comparing characters while they are same
//        while (h > l)
//        {
//            if (str[l++] != str[h--])
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//
//    int count = 0;
//    int longestPalindrome(string s) {
//        vector<string> vec;
//        if (s.length() == 0) return 0;
//        if (isPalindrome(s)) {
//            if (s.length() > count) {
//                cout << s << endl;
//                count = s.length();
//            }
//            return count;
//        }
//        else {
//            return max(longestPalindrome(s.substr(0,(s.length()-1))), longestPalindrome(s.substr(1, s.length())));
//
//        }
//        return 0;
//    }
//};
//
//int main() {
//    Solution t;
//    cout << t.longestPalindrome("cbbd") << endl;
//}



//===================================================== Dynamic Array - Hackerank ==============================================================

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int n,q;
//    int lastAns = 0;
//
//    cin >> n;
//    cin >> q;
//
//    vector<vector<int>> seqList(n);
//
//    for (int i=0; i<q; i++) {
//        int x,y,z;
//        int seqInd;
//        cin >> x >> y >> z;
//        seqInd = (y^lastAns)%n;
//        if (x == 1 ) {
//            seqList[seqInd].push_back(z);
//        }
//        else {
//            if (seqList[seqInd].size() != 0)
//                lastAns = seqList[seqInd][z%(seqList[seqInd].size())];
//            else
//                continue;
//            cout << lastAns << endl;
//        }
//    }
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//void reverseArr(int arr[], int a, int b) {
//    while (b > a) {
//        int tmp = arr[a];
//        arr[a] = arr[b];
//        arr[b] = tmp;
//        a++;
//        b--;
//    }
//}
//
//int main() {
//    int n, d;
//
//    cin >> n >> d;
//
//    int arr[n];
//
//    for (int i=0; i<n; i++) {
//        cin >> arr[i];
//    }
//
//    reverseArr(arr, 0, d-1);
//    reverseArr(arr, d, n-1);
//    reverseArr(arr, 0, n-1);
//
//    for (int i=0; i<n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}


//
//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
//    vector<int> result;
//    map<string, int> mapp;
//    map<string, int>::iterator itt;
//
//    for (int i=0; i<strings.size(); i++) {
//        if (mapp.find(strings[i]) != mapp.end()) {
//            mapp.at(strings[i]) = mapp.at(strings[i]) + 1;
//            continue;
//        }
//        mapp.insert({strings[i], 1});
//    }
//
//    for (int i=0; i<queries.size(); i++) {
//        if(mapp.find(queries[i]) != mapp.end()) {
//            result.push_back(mapp.at(queries[i]));
//        } else {
//            result.push_back(0);
//        }
//    }
//
//    return result;
//
//}
//
//
//int main() {
//    vector<string> strings;
//    vector<string> queries;
//    int n;
//    cin >> n;
//    for (int i=0; i<n; i++) {
//        string tmp;
//        cin >> tmp;
//        strings.push_back(tmp);
//    }
//    int m;
//    cin >> m;
//    for (int i=0; i<m; i++) {
//        string tmp;
//        cin >> tmp;
//        queries.push_back(tmp);
//    }
//
//    matchingStrings(strings, queries);
//
//    return 0;
//}



//
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    long int N,K,p,q,sum,i,max=0,x=0;
//
//    cin>>N>>K;
//    int *a=new int[N+1]();
//
//    for(i=0;i<K;i++)
//    {
//        cin>>p>>q>>sum;
//        for (int i=0; i<N; i++) {
//            cout << a[i] << " ";
//        } cout << endl;
//        a[p]+=sum;
//        if((q+1)<=N) a[q+1]-=sum;
//    }
//
//    for(i=1;i<=N;i++)
//    {
//        cout << a[i] << i << endl;
//       x=x+a[i];
//       if(max<x) max=x;
//
//    }
//
//    cout<<max;
//    return 0;
//}
//
//

//#include <iostream>
//
//using namespace std;
//
//int lis (int arr[], int n) {
//    int omax = 0;
//    if (n==1) return 1;
//
//    int dp[n];
//
//    for (int i=0; i<n; i++) {
//        int max = 0;
//        for (int j=0; j<i; j++) {
//            if (arr[j] < arr[i]) {
//                if (dp[j] > max) {
//                    max = dp[j];
//                }
//            }
//        }
//        dp[i] = max + 1;
//        if (dp[i] > omax) {
//            omax = dp[i];
//        }
//    }
//
//    return omax;
//}
//
//int main() {
//    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
//
//    cout << lis(arr, sizeof(arr)/sizeof(arr[0])) << endl;;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int minCoins(int coins[], int m, int V) {
//    int table[V+1];
//
//    table[0] = 0;
//
//    for (int i=1; i<=V; i++)
//        table[i] = INT_MAX;
//
//
//    for (int i=1; i<=V; i++)
//    {
//        for (int j=0; j<m; j++)
//        if (coins[j] <= i)
//        {
//            int sub_res = table[i-coins[j]];
//            if (sub_res != INT_MAX && sub_res + 1 < table[i])
//                table[i] = sub_res + 1;
//        }
//    }
//    return table[V];
//}
//
//int main() {
//    int coins[] = {1, 2, 4, 6};
//    int m = sizeof(coins)/sizeof(coins[0]);
//    int V = 10;
//    cout << "Minimum coins required is "
//        << minCoins(coins, m, V);
//    return 0;
//}
//

//#include <iostream>
//
//using namespace std;
//
//void rotateShell(int (arr)[100][100], int s, int r, int m, int n);
//void display(int (arr)[100][100], int m, int n);
//int* fillOnedFromShell(int (arr)[100][100], int s, int m, int n);
//void fillShellFromOned(int (arr)[100][100], int s, int (oneD)[100], int m, int n);
//void reverse(int (oneD)[100], int lo, int hi);
//void rotate (int (oneD)[100], int r, int sz);
//
//
//int main() {
//    int m,n,s,r;
//
//    cin >> m >> n;
//    int arr[100][100];
//    for (int i=0; i<m; i++) {
//        for (int j=0; j<n; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    cin >> s >> r;
//    rotateShell(arr, s, r, m, n);
//    display(arr, m, n);
//
//    return 0;
//}
//
//
//void rotateShell(int (arr)[100][100], int s, int r, int m, int n) {
//    int minr = s-1;
//    int minc = s-1;
//    int maxr = m - s;
//    int maxc = n - s;
//    int sz = 2 * ((maxc-minc) + (maxr-minr));
//    int* tmp = fillOnedFromShell(arr, s, m, n);
//    int oned[sz];
//    for (int i=0; i<sz; i++) {
//        oned[i] = *tmp;
//        tmp++;
//    }
//
//    rotate(oned, r, sz-1);
//
//    fillShellFromOned(arr, s, oned, m, n);
//}
//
//int* fillOnedFromShell(int (arr)[100][100], int s, int m, int n) {
//
//    int minr = s-1;
//    int minc = s-1;
//    int maxr = m - s;
//    int maxc = n - s;
//
//    static int oneD[100];
//    int idx=0;
//    for (int i=s-1, j=s-1; i<=m-s; i++) {
//        oneD[idx] = arr[i][j];
//        idx++;
//    }
//
//    for (int i=maxr, j=minc+1; j<=maxc; j++) {
//        oneD[idx] = arr[i][j];
//        idx++;
//    }
//
//    for (int i=maxr-1, j=maxc; i >= minr; i--) {
//        oneD[idx] = arr[i][j];
//        idx++;
//    }
//
//    for (int i=minr, j=maxc-1; j >= minc+1; j--) {
//        oneD[idx] = arr[i][j];
//        idx++;
//    }
//
//    return oneD;
//}
//
//void fillShellFromOned(int (arr)[100][100], int s, int (oneD)[100], int m, int n) {
//    int minr = s-1;
//    int minc = s-1;
//    int maxr = m - s;
//    int maxc = n - s;
//    int idx=0;
//    for (int i=minr, j=minc; i<=maxr; i++) {
//        arr[i][j] = oneD[idx];
//        idx++;
//    }
//
//    for (int i=maxr, j=minc+1; j<=maxc; j++) {
//        arr[i][j] = oneD[idx];
//        idx++;
//    }
//
//    for (int i=maxr-1, j=maxc; i >= minr; i--) {
//        arr[i][j] = oneD[idx];
//        idx++;
//    }
//
//    for (int i=minr, j=maxc-1; j >= minc+1; j--) {
//        arr[i][j] = oneD[idx];
//        idx++;
//    }
//}
//
//void reverse(int (oned)[100], int lo, int hi) {
//    while (hi > lo) {
//        int tmp = oned[hi];
//        oned[hi] = oned[lo];
//        oned[lo] = tmp;
//        hi--;
//        lo++;
//    }
//}
//
//void rotate (int (oned)[100], int r, int sz) {
//    cout << sz << " TEST " << endl;
//    r = r % sz;
//
//    if (r<0) {
//        r = r + sz;
//    }
//    reverse(oned, 0, (sz-r));
//    reverse(oned, (sz-r+1), sz);
//    reverse(oned, 0, sz);
//}
//
//
//void display(int (arr)[100][100], int m, int n) {
//    for (int i=0; i<m; i++) {
//        for (int j=0; j<n; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}


//#include <iostream>
//
//using namespace std;
//
//
//class Node {
//public:
//    int data;
//    Node* next;
//};
//
//class linkedList {
//public:
//    Node* head;
//    Node* tail;
//    int size;
//};
//
//void append(Node* (&head_ref), Node* (&tail_ref), int &size, int val) {
//    Node* new_node = new Node;
//
//    new_node->data = val;
//    new_node->next = NULL;
//    if(head_ref == NULL) {
//        head_ref = new_node;
//        tail_ref = new_node;
//        tail_ref->next = NULL;
//        size++;
//        return;
//    }
//    tail_ref->next = new_node;
//    tail_ref = new_node;
//    size++;
//    return;
//}
//
//
//void removeFirst(Node* (&head_ref), Node* (&tail_ref), int &size) {
//
//    if(head_ref->next == NULL) {
//        head_ref = NULL;
//        tail_ref = NULL;
//        size = 0;
//        return;
//    }
//
//    if(head_ref == NULL) {
//        cout << "List is empty" << endl;
//        return;
//    }
//
//    head_ref = head_ref->next;
//    size--;
//    return;
//}
//
//void getAt(Node* head_ref, int size, int n) {
//    if (size==0) {
//        cout << "Invalid argument" << endl;
//        return;
//    }
//    if (n < 0 || n>=size) {
//        cout << "Invalid argument" << endl;
//        return;
//    }
//    int count = 0;
//    while (count != n+1) {
//        if(count == n) cout << head_ref->data << endl;
//        head_ref = head_ref->next;
//        count++;
//    }
//    return;
//}
//
//void display (Node* head_ref) {
//    while (head_ref != NULL) {
//        cout << head_ref->data << endl;
//        head_ref = head_ref->next;
//    }
//}
//
//int main() {
//    linkedList l1;
//    l1.head = NULL;
//    l1.tail = NULL;
//    l1.size = 0;
//
//    append(l1.head, l1.tail, l1.size, 5);
//    append(l1.head, l1.tail, l1.size, 6);
//    append(l1.head, l1.tail, l1.size, 7);
//
//    getAt(l1.head, l1.size, 0);
//    cout << " TEST " << endl;
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//void toh(int n, int t1, int t2, int t3) {
//    if (n==0) return;
//
//    toh(n-1, t1, t3, t2);
//    cout << n << " " << t1 << " -> " << t2 << endl;
//    toh(n-1, t3, t2, t1);
//}
//
//int main() {
//
//    int n,t1,t2,t3;
//    cin >> n;
//    cin >> t1;
//    cin >> t2;
//    cin >> t3;
//    toh(n, t1,t2,t3);
//
//    return 0;
//}

//
//#include <iostream>
//
//using namespace std;
//
//int disp(int arr[], int n, int val)  {
//    if (n==-1) {
//        cout << "No matching value found" << endl;
//        return -1;
//    }
//
//    if (arr[n] == val) {
//        cout  << "TEST" << endl;
//        return n;
//    }
//    disp(arr, n-1, val);
//    return 0;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int arr[n];
//    for (int i=0; i<n; i++) {
//        cin >> arr[i];
//    }
//    int test = disp(arr, n-1, 8);
//    cout << test << endl;
//    return 0;
//}

#include <iostream>
#include <vector>

using namespace std;


vector<string> gss(string str) {
    if (str.size() == 1) {
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    
    char ch = str.at(0);
    string ros = str.substr(1);
    vector<string> rres = gss(ros);
    
    vector<string> mres;
    for (string rstr : rres) {
        mres.push_back("" + rstr);
        mres.push_back(ch + rstr);
    }
    
    return mres;
}

int main() {
    string str;
    cin >> str;
    
    vector<string> res = gss(str);
    for (string t1 : res) {
        if (t1 == "sa") {
            cout << "The given is a substring of  " << str << endl;
            return 0;
        }
    }
    cout << "No such substring found in " << str << endl;
    return 0;
}



