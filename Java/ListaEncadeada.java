/**
 * ListaEncadeada.java
 *
 *
 * @author 
 * @version 1.00 2012/8/31
 */
import java.util.LinkedList;

public class ListaEncadeada {

    public static void main(String[] args) {
    	LinkedList<Integer> lista = new LinkedList<Integer>();
    	int y = 200;
    	while(y>=0){
    		for(int i = 0; i<lista.size(); i++){
    			lista.add(0);
    		}
    		y--;
    	}
    }
    
    
}