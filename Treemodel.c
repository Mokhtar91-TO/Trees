#include <stdio.h>
#include <stdlib.h>



typedef struct node {
    int val;
    struct node* left;
    struct node* right;
    struct node* up;
}node;


node* AllocateNode(int v){
    node* p=(node*)malloc(sizeof(node));
    p->val=v;
    p->left=NULL;
    p->right=NULL;
    p->up=NULL;
    return p;
}


void freenode(node* p){
    free(p);
}


int nodevalue(node* p){
    return p->val;
}

node* RC(node* p){
    return p->right;
}

node* LC(node* p){
    return p->left;
}

node* parent(node* p){
    return p->up;
}

void ass_node_val(node* p,int v){
    p->val=v;
}


void ass_Lc(node* p,node* q){
    p->left=q;
    if(q!=NULL){
        q->up=p;
    }
}

void ass_Rc(node* p,node* q){
    p->right=q;
    if(q!=NULL){
        q->up=p;
    }
}

void ass_parent(node* p,node* q){
    p->up=q;
}

void displaytree(node* root,int level){
    if(root==NULL){
        return;
    }
    display(RC(root),level+1);
    for(int i=0;i<level;i++){
        printf("    ");
        printf("%d\n",nodevalue(root));
    }
    displaytree(LC(root),level+1);
}




node* buildtree(){
    int val,hasleft,hasright;

    printf("Enter node value : ");
    scanf("%d",&val);

    node* node =AllocateNode(val);
    printf("Does node %d have a left child ? (1 for yes,0 for no ): ",val);
    scanf("%d",&hasleft);
    if(hasleft){
        node* leftchild =buildtree();
    }





}















