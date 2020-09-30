#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

struct tree{
    ll key;
    tree *p, *l, *r;
};

tree *root, *NIL;

string to_str(int num){
  std::ostringstream oss;
  oss << num;
  return oss.str();
}

void pre_order(tree *v){
  if (v == NIL) return;
  cout << " " << v-> key;
  pre_order(v-> l);
  pre_order(v-> r);
}

void in_order(tree *v){
  if (v == NIL) return;
  in_order(v-> l);
  cout << " " << v-> key;
  in_order(v-> r);
}

void insert(int k){
  tree *y = NIL;
  tree *x = root;
  tree *z;

  z = (tree *)malloc(sizeof(tree));
  z->key = k;
  z->l = NIL;
  z->r = NIL;

  while(x != NIL){
    y = x;
    if (z-> key < x-> key)
      x = x->l; 
    else
      x = x->r; 
  }
  z-> p = y;
  if (y == NIL){
    root = z;
  } else{
    if (z-> key < y-> key ){
      y-> l = z;
    } else {
      y-> r = z;
    }
  }
}
 
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    string cmd;
    cin >> cmd;
    if (cmd == "print") {
      in_order(root);
      cout << endl;
      pre_order(root);
      cout << endl;
    } else {
      ll v;
      cin >> v;
      insert(v);
    }
  } 
}