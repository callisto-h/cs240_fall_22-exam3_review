/**
* QUESTIONS:
* 
* 1. Given an AVL tree with N nodes, what is the 
     maximum height of the tree?

* 2. If the root node of an AVL tree is balanced, is
*    the tree balanced?
*
* 3. What are the balance factor of these nodes in the
     following AVL tree?
*
*                         ┌─┐
*                         │A│
*              ┌──────────┴─┴───────────┐
*              │                        │
*             ┌┴┐                      ┌┴┐
*             │B│                      │C│
*        ┌────┴─┘               ┌──────┴─┘
*        │                      │
*        │                      │
*       ┌┴┐                    ┌┴┐
*       │D│                    │E│
*  ┌────┴─┘                    └─┴────┐
*  │                                  │
*  │                                  │
* ┌┴┐                                ┌┴┐
* │F│                                │G│
* └─┘                                └─┘
*
*
* 4. What type of rotation needs to be performed on
*    the following tree, and what will the resulting
*    tree look like?
*
*
*   ┌─┐
*   │A│
*   └─┴────┐
*          │
*         ┌▼┐
*         │C│
*      ┌──┴─┴──┐
*      │       │
*     ┌▼┐     ┌▼┐
*     │B│     │D│
*     └─┘     └─┘
*
* 5. Would it be accurate to claim that new values are
*    always inserted into an AVL tree location such that
*    the tree stays balanced? Why or why not?
*
* 6. Describe the AVL-removal operation. What is it's
*    runtime complexity, and why?
*
* ANSWERS:
* 
* 1. Since an AVL tree is guaranteed to be balanced, 
     the height will be logn.
*
* 2. No, the subtrees could be unbalanced.
*
* 3. Balance factors:
*       a. 0
*       b. 2
*       c. 2
*       d. 1
*       e. 1
*       f. 0
*       g. 0
*
* 4. A left rotate needs to occur on A, resulting
     in the following:
* 
* 
* 
*        ┌─┐
*        │C│
*  ┌─────┴─┴─────┐
*  │             │
* ┌▼┐           ┌▼┐
* │A│           │D│
* └─┴─┐         └─┘
*     │
*    ┌▼┐
*    │B│
*    └─┘
*
* 5. I would argue no, because the initial location
*    that a node may be placed in could cause the 
*    tree to become unbalanced. Only after the 
*    tree becomes unbalanced, does the tree re-balance
*    itself with rotations.
*
* 6. The operation traverses the tree until it finds
*    the value [O(logn)], removes it [O(1)], 
*    and traverses back up the tree to rebalance it 
*    [O(logn)]. Therefore it is O(logn).


*/