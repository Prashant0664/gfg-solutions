// // //{ Driver Code Starts
// // // Initial template for C++

// // #include <bits/stdc++.h>
// // using namespace std;


// // // } Driver Code Ends
// // class Solution {
// // public:
// // int verify(int i,int j,int n,int m){
// //     if(i<0||j<0||i>=n||j>=m){
// //         return 1;
// //     }
// //     return 0;
// // }
// //     int check(vector<vector<char>>board,int i,int j,int n,int m, vector<vector<int>>v,string word,int poi){
// //         if(verify(i,j,n,m)){
// //             return 0;
// //         }
// //         if(v[i][j]==0){
// //             return 0;
// //         }
// //         if(board[i][j]==word[poi]&&v[i][j]==1){
// //             v[i][j]=0;
// //             int a1=check(board,i+1,j,n,m,v,word,poi+1);
// //             int a2=check(board,i,j+1,n,m,v,word,poi+1);
// //             int a3=check(board,i,j-1,n,m,v,word,poi+1);
// //             int a4=check(board,i-1,j,n,m,v,word,poi+1);
// //             int a5=check(board,i-1,j-1,n,m,v,word,poi+1);
// //             int a6=check(board,i+1,j+1,n,m,v,word,poi+1);
// //             int a7=check(board,i-1,j+1,n,m,v,word,poi+1);
// //             int a8=check(board,i+1,j-1,n,m,v,word,poi+1);
// //             return a1+a2+a3+a4+a5+a6+a7+a8;
// //         }
// //         else{
// //             return 0;
// //         }
        
        
// //     }
// // 	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
// // 	    vector<vector<int>>v;
// // 	    int n=board.size();
// // 	    int m=board.size();
// // 	    for(int i=0;i<n;i++){
// // 	        vector<int>v2;
// // 	        for(int i=0;i<m;i++){
// // 	            v2.push_back(0);
// // 	        }
// // 	        v.push_back(v2);
// // 	    }
	    
// // 	        unordered_map<string,int>m2;
// // 	    for(int i=0;i<dictionary.size();i++){
// // 	    unordered_map<char,int>m1;
// // 	        for(int j=0;j<dictionary[i].length();j++){
// // 	            m1[dictionary[i][j]]++;
// // 	        }
// // 	        for(int j=0;j<n;j++){
// // 	            for(int k=0;k<m;k++){
// // 	                if(m1[board[j][k]]>0)
// //     	                {v[i][j]=1;}
// // 	            }
// // 	        }
// // 	        for(int j=0;j<n;j++){
// // 	            for(int k=0;k<m;k++){
// // 	                if(board[j][k]==dictionary[i][0]){
// // 	                    string word=dictionary[i];
// // 	                    int poi=0;
// // 	                    if(check(board,j,k,n,m,v,word,poi)>0){
// // 	                        cout<<"+++";
// // 	                        m2[dictionary[i]]=1;
// // 	                    }
// // 	                }
// // 	            }
// // 	        }
	        
// // 	    }
// // 	    vector<string>ans={};
// // 	    for(int i=0;i<dictionary.size();i++){
// // 	        if(m2[dictionary[i]]>0){
// // 	            ans.push_back(dictionary[i]);
// // 	        }
// // 	    }
// // 	    return ans;
	
// // 	}
// // };

// // //{ Driver Code Starts.

// // int main() {
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         int N;
// //         cin >> N;
// //         vector<string> dictionary;
// //         for (int i = 0; i < N; ++i) {
// //             string s;
// //             cin >> s;
// //             dictionary.push_back(s);
// //         }
        
// //         int R, C;
// //         cin >> R >> C;
// //         vector<vector<char> > board(R);
// //         for (int i = 0; i < R; i++) {
// //             board[i].resize(C);
// //             for (int j = 0; j < C; j++) cin >> board[i][j];
// //         }
// //         Solution obj;
// //         vector<string> output = obj.wordBoggle(board, dictionary);
// //         if (output.size() == 0)
// //             cout << "-1";
// //         else {
// //             sort(output.begin(), output.end());
// //             for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
// //         }
// //         cout << endl;
// //     }
// // }

// // // } Driver Code Ends
// //{ Driver Code Starts
// // Initial template for C++

// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution {
// public:
// int verify(int i,int j,int n,int m){
//     if(i<0||j<0||i>=n||j>=m){
//         return 1;
//     }
//     return 0;
// }
//     int check(vector<vector<char>>board,int i,int j,int n,int m, vector<vector<int>>v,string word,int poi){
//         // if(verify(i,j,n,m)){
//         //     return 0;
//         // }
//     //     if(i<0||j<0||i>=n||j>=m||board[i][j]!=word[poi]){
//     //     return 0;
//     // }
//         // if(v[i][j]==0){
//         //     return 0;
//         // }
//         // if(){
//         //     return 0;
//         // }
//         if(poi==word.length()-1){
//             return 1;
//         }
//         // char cc=board[i][j];
//         board[i][j]='-';
//         // if(board[i][j]==word[poi]){
//             // v[i][j]=0;
//             int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0;
//             if(i+1>=0&&j>=0&&i+1>n&&j<m&&board[i+1][j]==word[poi+1])a1=check(board,i+1,j,n,m,v,word,poi+1);
//             if(i>=0&&j+1>=0&&i>n&&j+1<m&&board[i][j+1]==word[poi+1])a2=check(board,i,j+1,n,m,v,word,poi+1);
//             if(i>=0&&j-1>=0&&i>n&&j-1<m&&board[i][j-1]==word[poi+1])a3=check(board,i,j-1,n,m,v,word,poi+1);
//             if(i-1>=0&&j>=0&&i-1>n&&j<m&&board[i-1][j]==word[poi+1])a4=check(board,i-1,j,n,m,v,word,poi+1);
//             if(i-1>=0&&j-1>=0&&i-1>n&&j-1<m&&board[i-1][j-1]==word[poi+1])a5=check(board,i-1,j-1,n,m,v,word,poi+1);
//             if(i+1>=0&&j+1>=0&&i+1>n&&j+1<m&&board[i+1][j+1]==word[poi+1])a6=check(board,i+1,j+1,n,m,v,word,poi+1);
//             if(i-1>=0&&j+1>=0&&i-1>n&&j+1<m&&board[i-1][j+1]==word[poi+1])a7=check(board,i-1,j+1,n,m,v,word,poi+1);
//             if(i+1>=0&&j-1>=0&&i+1>n&&j-1<m&&board[i+1][j-1]==word[poi+1])a8=check(board,i+1,j-1,n,m,v,word,poi+1);
//             // board[i][j]=cc;
//             return a1||a2||a3||a4||a5||a6||a7||a8;
//         // }
//         // else{
//             // return 0;
//         // }
        
        
//     }
// 	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    
// 	    int n=board.size();
// 	    int m=board[0].size();
// 	    vector<string>ans={};
// 	    set<string>store;
// 	    vector<vector<int>>v;
// 	   unordered_map<int,int>mm;
// 	    for(int i=0;i<dictionary.size();i++){
// 	        string s=dictionary[i];
// 	        int l=s.size();
// 	        for(int j=0;j<n;j++){
// 	            if(mm[i]!=1){
// 	            for(int k=0;k<m;k++){
// 	                if(board[j][k]==dictionary[i][0])
// 	                if(check(board,j,k,n,m,v,dictionary[i],0)){
// 	                    store.insert(s);
// 	                    mm[i]=1;
// 	                }
// 	            }}
// 	            else{
// 	                break;
// 	            }
// 	        }
// 	    }
// 	    for(auto i:store){
// 	        ans.push_back(i);
// 	    }
// 	    return ans;
// 	   // vector<vector<int>>v;
// 	   // int n=board.size();
// 	   // int m=board.size();
	    
// 	   //     unordered_map<string,int>m2;
// 	   // for(int i=0;i<dictionary.size();i++){
// 	   // unordered_map<char,int>m1;
// 	   //     for(int j=0;j<dictionary[i].length();j++){
// 	   //         m1[dictionary[i][j]]++;
// 	   //     }
// 	   //     for(int j=0;j<n;j++){
// 	   //         for(int k=0;k<m;k++){
// 	   //             if(m1[board[j][k]]>0)
//     // 	                {v[i][j]=1;}
// 	   //         }
// 	   //     }
// 	   //     for(int j=0;j<n;j++){
// 	   //         for(int k=0;k<m;k++){
// 	   //             if(board[j][k]==dictionary[i][0]){
// 	   //                 string word=dictionary[i];
// 	   //                 int poi=0;
// 	   //                 if(check(board,j,k,n,m,v,word,poi)>0){
// 	   //                    // cout<<"+++";
// 	   //                     m2[dictionary[i]]=1;
// 	   //                 }
// 	   //             }
// 	   //         }
// 	   //     }
	        
// 	   // }
// 	   // vector<string>ans={};
// 	   // for(int i=0;i<dictionary.size();i++){
// 	   //     if(m2[dictionary[i]]>0){
// 	   //         ans.push_back(dictionary[i]);
// 	   //     }
// 	   // }
// 	   // return ans;
//             // int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0;
//             // if(board[i+1][j]==word[poi+1])a1=check(board,i+1,j,n,m,v,word,poi+1);
//             // if(board[i][j+1]==word[poi+1])a2=check(board,i,j+1,n,m,v,word,poi+1);
//             // if(board[i][j-1]==word[poi+1])a3=check(board,i,j-1,n,m,v,word,poi+1);
//             // if(board[i-1][j]==word[poi+1])a4=check(board,i-1,j,n,m,v,word,poi+1);
//             // if(board[i-1][j-1]==word[poi+1])a5=check(board,i-1,j-1,n,m,v,word,poi+1);
//             // if(board[i+1][j+1]==word[poi+1])a6=check(board,i+1,j+1,n,m,v,word,poi+1);
//             // if(board[i-1][j+1]==word[poi+1])a7=check(board,i-1,j+1,n,m,v,word,poi+1);
            
//             // if(board[i+1][j-1]==word[poi+1])a8=check(board,i+1,j-1,n,m,v,word,poi+1);
//             // board[i][j]=cc;
//             // return a1||a2||a3||a4||a5||a6||a7||a8;
	
// 	}
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N;
//         cin >> N;
//         vector<string> dictionary;
//         for (int i = 0; i < N; ++i) {
//             string s;
//             cin >> s;
//             dictionary.push_back(s);
//         }
        
//         int R, C;
//         cin >> R >> C;
//         vector<vector<char> > board(R);
//         for (int i = 0; i < R; i++) {
//             board[i].resize(C);
//             for (int j = 0; j < C; j++) cin >> board[i][j];
//         }
//         Solution obj;
//         vector<string> output = obj.wordBoggle(board, dictionary);
//         if (output.size() == 0)
//             cout << "-1";
//         else {
//             sort(output.begin(), output.end());
//             for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
//         }
//         cout << endl;
//     }
// }

// // } Driver Code Ends
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
int verify(int i,int j,int n,int m){
    if(i<0||j<0||i>=n||j>=m){
        return 1;
    }
    return 0;
}
    int check(vector<vector<char>>board,int i,int j,int n,int m, vector<vector<int>>v,string word,int poi){
        // if(verify(i,j,n,m)){
        //     return 0;
        // }
    //     if(i<0||j<0||i>=n||j>=m||board[i][j]!=word[poi]){
    //     return 0;
    // }
        // if(v[i][j]==0){
        //     return 0;
        // }
        // if(){
        //     return 0;
        // }
        if(poi==word.length()-1){
            return 1;
        }
        // char cc=board[i][j];
        board[i][j]='-';
        // if(board[i][j]==word[poi]){
            // v[i][j]=0;
            int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0;
            if(i+1>=0&&j>=0&&i+1<n&&j<m&&board[i+1][j]==word[poi+1])a1=check(board,i+1,j,n,m,v,word,poi+1);
            if(i>=0&&j+1>=0&&i<n&&j+1<m&&board[i][j+1]==word[poi+1])a2=check(board,i,j+1,n,m,v,word,poi+1);
            if(i>=0&&j-1>=0&&i<n&&j-1<m&&board[i][j-1]==word[poi+1])a3=check(board,i,j-1,n,m,v,word,poi+1);
            if(i-1>=0&&j>=0&&i-1>n&&j<m&&board[i-1][j]==word[poi+1])a4=check(board,i-1,j,n,m,v,word,poi+1);
            if(i-1>=0&&j-1>=0&&i-1<n&&j-1<m&&board[i-1][j-1]==word[poi+1])a5=check(board,i-1,j-1,n,m,v,word,poi+1);
            if(i+1>=0&&j+1>=0&&i+1<n&&j+1<m&&board[i+1][j+1]==word[poi+1])a6=check(board,i+1,j+1,n,m,v,word,poi+1);
            if(i-1>=0&&j+1>=0&&i-1<n&&j+1<m&&board[i-1][j+1]==word[poi+1])a7=check(board,i-1,j+1,n,m,v,word,poi+1);
            if(i+1>=0&&j-1>=0&&i+1<n&&j-1<m&&board[i+1][j-1]==word[poi+1])a8=check(board,i+1,j-1,n,m,v,word,poi+1);
            // board[i][j]=cc;
            return a1||a2||a3||a4||a5||a6||a7||a8;
        // }
        // else{
            // return 0;
        // }
        
        
    }
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    
	    int n=board.size();
	    int m=board[0].size();
	    vector<string>ans={};
	    set<string>store;
	    vector<vector<int>>v;
	   unordered_map<int,int>mm;
	    for(int i=0;i<dictionary.size();i++){
	        string s=dictionary[i];
	        int l=s.size();
	        for(int j=0;j<n;j++){
	            if(mm[i]!=1){
	            for(int k=0;k<m;k++){
	                if(board[j][k]==dictionary[i][0])
	                if(check(board,j,k,n,m,v,dictionary[i],0)){
	                    store.insert(s);
	                    mm[i]=1;
	                }
	            }}
	            else{
	                break;
	            }
	        }
	    }
	    for(auto i:store){
	        ans.push_back(i);
	    }
	    return ans;
	   // vector<vector<int>>v;
	   // int n=board.size();
	   // int m=board.size();
	    
	   //     unordered_map<string,int>m2;
	   // for(int i=0;i<dictionary.size();i++){
	   // unordered_map<char,int>m1;
	   //     for(int j=0;j<dictionary[i].length();j++){
	   //         m1[dictionary[i][j]]++;
	   //     }
	   //     for(int j=0;j<n;j++){
	   //         for(int k=0;k<m;k++){
	   //             if(m1[board[j][k]]>0)
    // 	                {v[i][j]=1;}
	   //         }
	   //     }
	   //     for(int j=0;j<n;j++){
	   //         for(int k=0;k<m;k++){
	   //             if(board[j][k]==dictionary[i][0]){
	   //                 string word=dictionary[i];
	   //                 int poi=0;
	   //                 if(check(board,j,k,n,m,v,word,poi)>0){
	   //                    // cout<<"+++";
	   //                     m2[dictionary[i]]=1;
	   //                 }
	   //             }
	   //         }
	   //     }
	        
	   // }
	   // vector<string>ans={};
	   // for(int i=0;i<dictionary.size();i++){
	   //     if(m2[dictionary[i]]>0){
	   //         ans.push_back(dictionary[i]);
	   //     }
	   // }
	   // return ans;
            // int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0;
            // if(board[i+1][j]==word[poi+1])a1=check(board,i+1,j,n,m,v,word,poi+1);
            // if(board[i][j+1]==word[poi+1])a2=check(board,i,j+1,n,m,v,word,poi+1);
            // if(board[i][j-1]==word[poi+1])a3=check(board,i,j-1,n,m,v,word,poi+1);
            // if(board[i-1][j]==word[poi+1])a4=check(board,i-1,j,n,m,v,word,poi+1);
            // if(board[i-1][j-1]==word[poi+1])a5=check(board,i-1,j-1,n,m,v,word,poi+1);
            // if(board[i+1][j+1]==word[poi+1])a6=check(board,i+1,j+1,n,m,v,word,poi+1);
            // if(board[i-1][j+1]==word[poi+1])a7=check(board,i-1,j+1,n,m,v,word,poi+1);
            
            // if(board[i+1][j-1]==word[poi+1])a8=check(board,i+1,j-1,n,m,v,word,poi+1);
            // board[i][j]=cc;
            // return a1||a2||a3||a4||a5||a6||a7||a8;
	
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends