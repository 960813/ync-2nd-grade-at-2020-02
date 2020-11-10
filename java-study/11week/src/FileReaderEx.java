import java.io.FileReader;
import java.io.IOException;

// 문자 데이터를 읽기떄문에 FileReader를 사용
// 영문자는 InputStream을 사용해도 됨.
public class FileReaderEx {
    public static void main(String[] args) {
        FileReader fin = null;
        try {
            fin = new FileReader("C:\\windows\\system.ini");
            int c;
            while((c = fin.read()) != -1) {
                System.out.print((char)c);
            }
            fin.close();
        } catch (IOException e) {
            System.out.println("입출력 오류");
        }
    }
}
