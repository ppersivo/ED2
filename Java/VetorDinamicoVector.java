/**
 * VetorDinamicoVector.java
 *
 *
 * @author 
 * @version 1.00 2012/8/31
 */
import java.util.List;
import java.util.Vector;

public class VetorDinamicoVector {

    public static void main(String[] args) {
    	List<Integer> lista = new Vector<Integer>();
    	int y = 200;
    	while(y>=0){
    		for(int i=0;i<lista.size();i++){
    			lista.add(0);
    		}
    		y--;
    	}
    }
    
    
}