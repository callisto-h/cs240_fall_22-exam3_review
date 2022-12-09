/**
 * TOPIC: GRAPHS
 *
 */

/**
 * QUESTIONS:
 * 1. What is the big-O *SIZE* complexity of:
 *      a. An adjacency list graph representation
 *      b. An adjacency matrix graph representation
 * 
 * 2. What is meant when a graph is "sparse"?
 *    What about "dense?"
 * 
 * 3. Which graph representation should we use if a graph
 *    is sparse? Dense? Why?
 *
 * 4. What is the big-O *TIME* complexity of:
 *      a. Determining if two vertices are connected in
 *         an adjacency list
 *      b. Determining if two vertices are connected in
 *         an adjacency matrix
 * 
 * 5. When considering an undirected graph, how does an
 *    Adjacency Matrix waste space?
 * 
 *    BONUS: Is this waste still the case with directed
 *           graphs?
 *
 *
 * ANSWERS:
 * 1. Sizes:
 *       a. O(V+E) -- the list stores all of the vertices
 *         and the actual edges between vertices.
 *       b O(V^2) -- the matrix stores all possible connections
 *        between verticies, taking up more space.
 * 
 * 2. A graph is sparse if the number of edges is about equal
 *    to the number of vertices, (|E| ~= |V|). A dense graph is
 *    when the number of edges is about equal to the number
 *    of vertices squared, (|E| ~= |V|^2).
 * 
 * 3. We should use an Adjacency List for sparse graphs, and
 *    a Matrix for dense graphs. This can be best explained by 
 *    asking somebody to list all of the verticies connected to 
 *    a single vertex. With an Adjacency List, you just iterate over
 *    the linked list. With a Matrix, you have to iterate over all of
 *    the possible connections, which is much slower.
 * 
 * 4 . Time:
         a. O(V) -- A vertex's adjacency list must be traversed looking
           for the other vertex, and that list could have V items.
         b. O(1) -- If vertices (A, B, C) are mapped to (0, 1, 2), one
           could check for a connection between A and B by checking the
           matrix location (0, 1) in constant time.

   5. With undirected graphs, an Adjacency Matrix encodes the edges
 *    between verticies twice (ie, if verticies 2 and 3 are connected,
      entries [2,3] and [3,2] are both set to 1). 
      
      BONUS: This is not the case with directed graphs because 
      locations [2,3] and [3,2] do not mean the same thing.
 *
* /

/**
 * QUESTIONS:
 * 7. Which of these algorithms:
 *    (Dijkstra's, BFS, Kruskal's, DFS, Prim's, Bellman-Ford)
 *    Use which of the following structures:
 *    (Stack, Heap, Queue)
 * 
   8. What are the runtime complexities of the following
 *    algorithms?
 *       a. Kruskal's
 *       b. DFS
 *       c. Prim's
 *       d. BFS
 *       e. Djikstra's
 *
 * 9. Explain *why* each of the above algorithms has the
 *    run-time complexity that it does.
 *
 *    NOTE: I do not include an answer for this question.
 *          Discuss it with group partners and/or refer
 *          to notes and/or online material.
 *
 *          My reasoning for this is that Prof Lewis likes
 *          to ask questions that require knowing *how* the
 *          algorithm functions, like the next question:
 * 
 * ANSWERS:
 * 7. Structures:
 *      a. Dijsktra's : min-Heap of path distances
 *      b. BFS : Queue for building "frontier" of nodes
 *      c. Kruskal's : It CAN have a min-Heap of edge weights
 *      d. DFS : Stack for processing nodes
 *      e. Prim's : min-Heap of edge weights that have been
 *                  "encountered" so far
 *      f. B-F : None of the above! It just iterates through
 *               the set of verticies. 
 * 
 * 8. Time Complexities:
 *       a. Kruskal's   -- O(|E|log|V|) or O(|E|log|E|)!
 *       b. DFS         -- O(|E|+|V|)
 *       c. Prim's      -- O(|E|log|V|) with fib heaps
 *       d. BFS         -- O(|E|+|V|)
 *       e. Djikstra's  -- O((|E|+|V|)log|V|) per Zybooks, O(|E|lg|V|) per PL.
 * 
 *      NOTE: Some of these might not match up 100% with 
 *            either Prof Lewis' definitions or the zybooks.
 *            If there's a disagreement, 100% defer to his
 *            claims.
 *
 * 9. Runtime Explanations:
 *       NOTE: Discuss with groups and/or refer to online/class material.
 *             I'm happy to talk through the algorithms with you, but
 *             you'll understand them *best* if you can explain them
 *             to somebody else!
 * 
 */

/**
 * QUESTIONS:
 * *
 * 10. Take a maximally dense graph for example. In BFS, at each
 *    step we add all adjacent nodes to the processing queue.
 *    If this is the case, why *isn't* BFS O(V^2)?
 *
 * 11. In what graph types can Djikstra's algorthm be used to find
 *    shortest paths from a single vertex?
 *
 * 12. Given a graph G = {V, E}, how many vertices are in any given
 *    minimum spanning tree of G?
 *
 * 13. Given any connected graph G = {V, E}, under what conditions could
 *    one determine the sum of some MST edges in O(E) time?
 *
 *    NOTE: This is a really tough question, feel free to ask for
 *          a hint
 *
 * 14. Which MST algorithm:
 *       a. Uses a min-heap of edge weights
 *       b. Uses sets of connected/disconnected vertices
 *       c. Jumps around the graph in order of edge weight
 * 
 * ANSWERS:
 * 10. In BFS we add all adjacent nodes that *haven't been encountered yet*
 *    to the queue. Therefore, a maximum number of V nodes will be encountered.
 *    If we added all nodes (including the encountered ones) it would be O(V^2).
 *
 * 11. Djikstra's can be used on:
 *       a. Directed graphs
 *       b. Undirected graphs
 *       c. Weighted graphs
 *       d. Unweighted graphs,
 *       e. Cyclic graphs,
 *       f. Acyclic graphs,
 *       g. NON-NEGATIVE WEIGHTED graphs
 *
 * 12. The number of nodes in the MST it is ALWAYS |V| since
 *    the MST connects all nodes in the graph, regardless of
 *    the number of nodes in G.
 *
 * 13. If the graph is minimally sparse (as few edges as possible),
 *    there can only be one minimum spanning tree. Since there is
 *    only one MST, you can calculate the sum by adding all the
 *    edge weights together.
 *
 * 14. Components:
 *       a. Prim's uses a min-heap of edge weights
 *       b. Kruskal's uses sets of vertices, and processes edges in
            ascending order. It typically does not use a heap.
 *       c. Both sort of do this. Prim's adds edges to a heap as
 *          it encounters them and will process the smallest edges
 *          on the heap in order. This can lead to the node/edge 
 *          being processed to "jump around", but Prims visualized
 *          tends to spread out from the source node. Kruskal's
 *          will process the smallest edges in order, regardless 
 *          of where they are in the graph. This can lead to
 *          lots of "jumping around".
 * 
 */