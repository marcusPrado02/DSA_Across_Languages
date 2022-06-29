class DoublyNode {
	public int element;
	public DoublyNode back;
	public DoublyNode prox;


	public DoublyNode() {
		this(0);
	}
    

	public DoublyNode(int element) {
		this.element = element;
		this.back = this.next = null;
	}
}