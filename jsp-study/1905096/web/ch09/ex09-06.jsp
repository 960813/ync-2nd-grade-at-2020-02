<%--
  Created by IntelliJ IDEA.
  User: marti
  Date: 2020-11-04
  Time: 오후 4:51
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
    <script>
        function In_Check() {
            if (document.login.id.value == "") {
                alert("아이디(ID)를 입력하세요!!!");
                return;
            }
            if (document.login.pw.value == "") {
                alert("비밀번호를 입력하세요!!!");
                return;
            }

            document.login.submit();
        }
    </script>
</head>
<body>
<form action="ex09-06-1.jsp" method="post" name="login">
    <table border="1" cellspacing="1">
        <tr>
            <td>아 이 디:</td>
            <td><input type="text" name="id" size="15"></td>
        </tr>
        <tr>
            <td>비밀번호 :</td>
            <td><input type="password" name="pw" size="17"></td>
        </tr>
        <tr>
            <td colspan="2" align="center">
                <input type="button" value="로그인" onclick="In_Check()">
                <input type="reset" value="취  소">
            </td>
        </tr>
    </table>
</form>
</body>
</html>
