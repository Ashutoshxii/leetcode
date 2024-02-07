/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
    public:

        void insert(Node* &head, Node* &tail, int digit)
        {
            Node *temp = new Node(digit);
            if (head == NULL)
            {
                head = temp;
                tail = temp;
            }
            else
            {
                tail->next = temp;
                tail = tail->next;
            }
        }
    Node* copyRandomList(Node *head)
    {

       	//making new clone

        Node *cloneHead = NULL;
        Node *cloneTail = NULL;

        Node *original = head;
        while (original != NULL)
        {
            insert(cloneHead, cloneTail, original->val);
            original = original->next;
        }

       	//mapping
        unordered_map<Node*, Node*> mapper;
        original = head;
        Node *clone = cloneHead;
        while (original != NULL)
        {
            mapper[original] = clone;
            original = original->next;
            clone = clone->next;
        }

       	//putting random 
        original = head;
        clone = cloneHead;
        while (original != NULL)
        {
            clone->random = mapper[original->random];
            original = original->next;
            clone = clone->next;
        }
        return cloneHead;
    }
};