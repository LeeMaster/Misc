//! ## 剪枝迷宫问题
//! 
//! BFS也可以在某一个状态的时候进行剪枝，比如，在一个节点的时候，发现其除了来时方向以外其他的位置都不能走了，自然就可以不用入栈了。
//! 