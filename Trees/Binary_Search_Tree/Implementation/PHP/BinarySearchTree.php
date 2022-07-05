<?php

include 'TreeNode.php';

class BinarySearchTree {
    private $root;

    public function __construct(int $element) {
        $this->root = new TreeNode($element);
    }

    public function insertStepTwo(int $x, TreeNode $i = null){
        if($i == null){
            $i = new TreeNode($x);

        }else if ($x < $i->element) {

            $i->left = $this->insertStepTwo($x, $i->left);
   
        } else if ($x > $i->element) {
            
            $i->right = $this->insertStepTwo($x, $i->right);
   
        } else {
            //throw new Exception("Erro ao insert!");
        }

        return $i;
    }

    public function insert(int $x){
        
        if( $this->root == null ){
            $this->root = new TreeNode($x);
        }

        $this->root = $this->insertStepTwo($x, $this->root);
    }

    public function remove(int $x)  {
		$this->root = $this->removeStepTwo($x, $this->root);
	}

	
	private  function removeStepTwo( int $x, TreeNode $i ) {

		if ( $i == null ) {

         //throw new Exception("Erro ao remove!");

      } else if ( $x < $i->element ) {

         $i->left = $this->remove( $x, $i->left );

      } else if ( $x > $i->element ) {

         $i->right = $this->remove( $x, $i->right );

      
      } else if ( $i->right == null ) {
         $i = $i->left;

     
      } else if ( $i->left == null ) {
         $i = $i->right;

     
      } else {

         $i->left = $this->largestInLeft( $i, $i->left );
		
        }

		return $i;
	}

    private function largestInLeft(TreeNode $i, TreeNode $j) {

		if ($j->right == null) {
			$i->element = $j->element; 
			$j = $j->left;

		} else {
        
			$j->right = $this->largestInLeft($i, $j->right);
		}
		return $j;
	}

   public function getHeight(){
      return $this->getHeightStepTwo($this->root, 0);
   }



   public function getHeightStepTwo(TreeNode $i, int $height){
      if( $i == null ){
         $height -= 1;

      } else {

        $heightleft = $this->getHeight( $i->left, $height+1 );

        $heightright = $this->getHeight( $i->right, $height+1 );

        $height = ( $heightleft > $heightright ) ? $heightleft : $heightright;
     
      }

      return $height;
   }


   public function getLargestElement() {
      $tmp = $this->root;

     while( $tmp->right != null){
        $tmp = $tmp->right;
     }

      return $tmp->element;
   }

    
    
}
