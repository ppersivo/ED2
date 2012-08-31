/**
 * VetorDinamicoArrayList.java
 *
 *
 * @author 
 * @version 1.00 2012/8/31
 */
import java.util.ArrayList;
import java.util.List;

public class VetorDinamicoArrayList {

    public static void main(String[] args) {
    	List<Integer> lista = new ArrayList<Integer>();
    	int y = 200;
    	while(y>=0){
    		for(int i=0;i<lista.size();i++){
    			lista.add(0);
    		}
    		y--;
    	}
    }
    
    
}