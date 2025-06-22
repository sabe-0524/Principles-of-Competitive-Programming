#include <iostream>
using namespace std;

struct Node {
    int key;
    int compress;
    Node* left;
    Node* right;
    // コンストラクタで必ず初期化
    Node(int k)
      : key(k),
        compress(0),    // compress は 0 で初期化
        left(nullptr),
        right(nullptr)
    {}
};

struct Tree {
    Node* head = nullptr;  // 先頭も明示的に nullptr で初期化
};

Tree t;
int idx = 1;

void insert(int a, struct Node *n)
{
  if (a < n->key)
  {
    if (n->left)
      insert(a, n->left);
    else
    {
      Node *newnode = new Node(a);
      n->left = newnode;
      return;
    }
  }
  else if (a > n->key)
  {
    if (n->right)
      insert(a, n->right);
    else
    {
      Node *newnode = new Node(a);
      n->right = newnode;
      return;
    }
  }
  else
    return;
}

void comp(Node *n)
{
  if (n == nullptr)
    return;
  comp(n->left);
  n->compress = idx++;
  comp(n->right);
}

int getidx(Node *n, int p)
{
  if (n->key == p)
    return (n->compress);
  else if (p < n->key)
    return (getidx(n->left, p));
  else
    return (getidx(n->right, p));
}

int main(void)
{
  int n;
  int a[100005];
  cin >> n;
  t.head = NULL;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
  {
    if (t.head == NULL)
    {
      Node *n = new Node(a[i]);
      t.head = n;
    }
    else
    {
      insert(a[i], t.head);
    }
  }
  comp(t.head);
  for (int i = 0; i < n; i++)
  {
    cout << getidx(t.head, a[i]);
    if (i != n - 1)
      cout << " ";
    else
      cout << endl;
  }
  return (0);
}