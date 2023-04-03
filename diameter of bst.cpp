 int help(Node*root,int *h){
        if(root==NULL){
            h=0;
            return 0;
        }
        int lh=0;
        int rh=0;
        int ld=help(root->left,&lh);
        int rd=help(root->right,&rh);
        *h=max(lh,rh)+1;
        return max(lh+rh+1,max(ld,rd));
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        int h=0;
        return help(root,&h);
    }