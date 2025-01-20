#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* left;
    node* right;
    //constructor
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// take input the tress
node* input_tree()
{
    // first time amar kache kisu nai, root o nai
    // jahatu amar kache kono root nai, tai amak nij hate root banate hobe
    int val;
    cin>>val;
    node* root;
    
    // akon amar kach kono value na thakle root kono value receive korbe na, orthat root khali
    if(val== -1) root = NULL;
    else root = new node(val);


     // amar root create kora done
     queue<node*> q;
    // akon ami directly root push korte parbo na, karon amar root khali thakle error dibe , so
    if(root != NULL) q.push(root);

    while (!q.empty())
    {
        // 1st rule: line theke akon root ke ber koro
        node* p = q.front();
        q.pop();
        
        // 2nd rule: jabotio kaj, input newar jonno jabotio kaj hobe, children create kora 3rd rule apply korar jonno
        // childreen er duita value thake left and right value so

         node* myleft;
         node* myRight;

        int l,r;
        cin>>l>>r;

        if(l==-1) myleft = NULL; 
        else myleft = new node(l);

        if(r == -1) myRight = NULL;
        else myRight = new node(r);

        // left and right er vale dewa sesh akon connect kora
        p->left = myleft;
        p->right = myRight;



        // 3rd rule: child nodes gule ke ber kora
        if(p->left !=NULL) q.push(p->left);
        if(p->right != NULL) q.push(p->right);
    }
    

    return root;
}

void level_order(node* root)
{
    if(root == NULL) return;
    queue<node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        node* p = q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    
}

// print the specific level
void print_level(node* root, int target_level) {
    if (root == NULL) return;

    queue<pair<node*, int>> q; // Pair stores the node and its level
    q.push({root, 0}); // Start with level 0
    

    bool found = false;
    while (!q.empty()) 
    {
        // node* current = q.front().first;
        pair<node*, int> p = q.front();
        q.pop();
        node* node = p.first;
        int level = p.second;
        

        // Check if the current node is at the target level
        if (level == target_level) 
        {
            found = true;
            cout << node->val << " ";
        }

        // Add left and right children with their respective levels
        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});
        
    }

    if(!found)
    {
        cout<<"Invalid"<<endl;
    }
}

int main()
{
     node* root = input_tree(); 
    //  level_order(root);

     int x;
    //  cout<<"Enter the level: ";
     cin>>x;

     print_level(root, x);
}