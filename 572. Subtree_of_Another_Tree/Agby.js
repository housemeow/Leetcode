var isSubtree = function(s, t) {
    function nodeToString(node) {
        return (
            ',' + node.val +
            ',' + (node.left ? nodeToString(node.left) : 'null') +
            ',' + (node.right ? nodeToString(node.right) : 'null')
        );
    }
    const s2 = nodeToString(s);
    const t2 = nodeToString(t);
    return s2.includes(t2);
};
