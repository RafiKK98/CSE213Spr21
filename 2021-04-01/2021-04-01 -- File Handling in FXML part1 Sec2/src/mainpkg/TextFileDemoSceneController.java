package mainpkg;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.net.URL;
import java.util.ArrayList;
import java.util.ResourceBundle;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.input.ContextMenuEvent;
import javafx.scene.input.KeyEvent;
import javafx.scene.input.MouseEvent;
import user.Student;

public class TextFileDemoSceneController implements Initializable {

    @FXML    private TextField idTextField;
    @FXML    private TextField nameTextField;
    @FXML    private TextField cgpaTextField;
    @FXML    private TextField fileNameTextField;
    @FXML    private Label fileContentLabel;
    
    private ArrayList<Student> studList;

    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
          studList = new ArrayList<Student>();
    }    


    
    @FXML
    private void idTextFieldOnMouseClick(MouseEvent event) {
    }

    @FXML
    private void nameTextFieldOnMouseClick(ContextMenuEvent event) {
    }

    @FXML
    private void cgpaTextFieldOnKeyPressed(KeyEvent event) {
    }

    @FXML
    private void addToStudListButtonOnClick(ActionEvent event) {
        studList.add(
                new Student(
                    Integer.parseInt(idTextField.getText()),
                    nameTextField.getText(),
                    Float.parseFloat(cgpaTextField.getText())
                )
        );
        idTextField.clear(); nameTextField.clear(); cgpaTextField.clear();     
    }

    @FXML
    private void showStudListButtonOnClick(ActionEvent event) {
        String str="";
        for(Student s: studList){
            System.out.println(s);
            //s.showInfo();
            //str += (s + "\n");
        }
        //fileContentLabel.setText(str);
        
    }

    @FXML
    private void writeToFileButtonOnClick(ActionEvent event) {
        try {
            //writing to text file
            File f = new File(fileNameTextField.getText());
            //FileWriter fw = new FileWriter(fileNameTextField.getText());
            FileWriter fw = new FileWriter(f);
            for(Student s: studList){
                //fw.write(s.toString()+"\n");
                fw.write(s.getId()+","+s.getName()+","+s.getCgpa()+"\n");
            }
            fw.close();
            
        } catch (IOException ex) {
            Logger.getLogger(TextFileDemoSceneController.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    @FXML
    private void loadFileContentButtonOnClick(ActionEvent event) {
        FileReader fr=null;
        try {
            String str="", line=""; String[] tokens;
            fr = new FileReader(fileNameTextField.getText());
            Scanner s = new Scanner(fr);
            while(s.hasNextLine()){
                line = s.nextLine();   //"123,Asif,3.5"    "id:123; name:Asif; cgpa:3.5"
                tokens = line.split(",");
                str += "id:"+tokens[0]+"; Name:"+tokens[1]+"; Cgpa:"+tokens[2]+"\n";
            }
            fileContentLabel.setText(str);
            
        } catch (FileNotFoundException ex) {
            try {
                fr.close();
            } catch (IOException ex1) {
                Logger.getLogger(TextFileDemoSceneController.class.getName()).log(Level.SEVERE, null, ex1);
            }
            Logger.getLogger(TextFileDemoSceneController.class.getName()).log(Level.SEVERE, null, ex);
        }
        
    }
    
}
