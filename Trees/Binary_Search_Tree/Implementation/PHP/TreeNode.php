<?php
   
class TreeNode {
    public $element;
    public $left;
    public $right;

    public function __construct(int $element = NULL) {
        $this->element = $element;
        $this->left = NULL;
        $this->right = NULL;
    }

}

?>