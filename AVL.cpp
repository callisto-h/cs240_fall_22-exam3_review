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
* 7. What kind of information is stored in a given AVL node?
*
*/