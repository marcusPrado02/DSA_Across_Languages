 class Node {
	public int elemento; 
	public Node next;
	
	public Node() {
		this(0);
	}

	public Node(int elemento) {
      this.elemento = elemento;
      this.next = null;
	}
} 