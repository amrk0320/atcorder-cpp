#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

struct tree{
    int p, l, r;
};

const int NIL = -1;
const int MAX = 25;
tree t[MAX];
string pre, in, post;


string to_str(int num){
  std::ostringstream oss;
  oss << num;
  return oss.str();
}

void pre_order(int v){
  if (v == NIL) return;
  pre += " ";
  pre += to_str(v);
  if (NIL < t[v].l) pre_order(t[v].l);
  if (NIL < t[v].r) pre_order(t[v].r);
}

void in_order(int v){
  if (v == NIL) return;
  if (NIL < t[v].l) in_order(t[v].l);
  in += " ";
  in += to_str(v);
  if (NIL < t[v].r) in_order(t[v].r);
}

void post_order(int v){
  if (v == NIL) return;
  if (NIL < t[v].l) post_order(t[v].l);
  if (NIL < t[v].r) post_order(t[v].r);
  post += " ";
  post += to_str(v);
}
 
int main() {
  int n, root;
  cin >> n;
  pre = in = post = "";
  memset(t, -1, sizeof(t));
  for (int i = 0; i < n; i++){
    int id, l, r;
    cin >> id >> l >> r;
    t[id].l = l;
    t[id].r = r;
    if (NIL < l) t[l].p = id;
    if (NIL < r) t[r].p = id;
  } 
  for (int i = 0; i < n; i++){
    if (t[i].p == NIL) root = i;
  }
  cout << "Preorder" << endl;
  pre_order(root);
  cout << pre.substr(0, pre.size()) << endl;
  cout << "Inorder" << endl;
  in_order(root);
  cout << in.substr(0, in.size()) << endl;
  cout << "Postorder" << endl;
  post_order(root);
  cout << post.substr(0, post.size()) << endl;
}