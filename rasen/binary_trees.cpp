#include <bits/stdc++.h>
#include <string>
using namespace std;

struct tree{
    int p, l, r;
};

const int NIL = -1;
const int MAX = 25;
int d[MAX];
int s[MAX];
int h[MAX];
tree t[MAX];

void set_depth(int v, int dep){
  if (NIL == d[v]) d[v] = dep;
  if (NIL < t[v].l) set_depth(t[v].l, dep + 1);
  if (NIL < t[v].r) set_depth(t[v].r, dep + 1);
}

int set_height(int v){
  int h1, h2;
  h1 = h2 = 0;
  if (NIL < t[v].l) h1 = set_height(t[v].l)+1;
  if (NIL < t[v].r) h2 = set_height(t[v].r)+1;
  return h[v] = max(h1, h2);
}
 
int main() {
  int n, root;
  cin >> n;
  memset(t, -1, sizeof(t));
  memset(s, -1, sizeof(s));
  memset(d, -1, sizeof(d));
  memset(h, -1, sizeof(h));
  for (int i = 0; i < n; i++){
    int id, l, r;
    cin >> id >> l >> r;
    t[id].l = l;
    t[id].r = r;
    if (NIL < l) t[l].p = id;
    if (NIL < r) t[r].p = id;
    if (NIL < l && NIL < r) {
      s[l] = r;
      s[r] = l;
    }
  } 
  for (int i = 0; i < n; i++){
    if (t[i].p == NIL) root = i;
  }
  set_depth(root, 0);
  set_height(root);

  for (int i = 0; i < n; i++){
    cout << "node " << i << ": ";
    cout << "parent = " << t[i].p << ", ";
    cout << "sibling = " << s[i] << ", ";
    if (NIL < t[i].l && NIL < t[i].r) {
      cout << "degree = 2" << ", ";
    } else if (NIL < t[i].l || NIL < t[i].r) {
      cout << "degree = 1" << ", ";
    } else {
      cout << "degree = 0" << ", ";
    }
    cout << "depth = " << d[i] << ", ";
    cout << "height = " << h[i] << ", ";
    if (NIL == t[i].p) {
      cout << "root" << endl;
    } else if (NIL < t[i].l || NIL < t[i].r) {
      cout << "internal node" << endl;
    } else {
      cout << "leaf" << endl;
    }
  } 
}