package mainpkg;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.input.MouseEvent;

public class ArithmeticOperationSceneController implements Initializable {

    @FXML    private TextField xTextField;
    @FXML    private TextField yTextField;
    @FXML    private Button addButton;
    @FXML    private Button subtractButton;
    @FXML    private Label rsultLabel;


    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    


    @FXML
    private void addButtonOnClick(ActionEvent event) {
	String xStr, yStr;
	xStr = xTextField.getText();	//"12"
	yStr = yTextField.getText();	//"13"

	//xStr+yStr;	//"1213"

	int xVal, yVal, sum;
	xVal = Integer.parseInt(xStr);	//number 12, parsing successful
	yVal = Integer.parseInt(yStr);	//number 13, parsing successful
	sum = xVal + yVal;

	String resultStr = Integer.toString(sum);	
	rsultLabel.setText("X+Y = "+resultStr);

	//rsultLabel.setText("X + Y = "+sum);		//int x = 10;	"abc="+x  --> "abc=10"	
    }

    @FXML
    private void subtractButtonOnClick(ActionEvent event) {
        
    }

    @FXML
    private void xTextFieldOnMouseClick(MouseEvent event) {
        xTextField.clear();
    }

    @FXML
    private void yTextFieldOnMouseClick(MouseEvent event) {
        yTextField.setText("");
    }
    
    
}
