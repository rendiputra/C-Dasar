Public Class Form1
    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles tambah.Click
        tbhasil.Text = Val(tb1.Text) + Val(tb2.Text)
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles tb1.TextChanged

    End Sub

    Private Sub TextBox3_TextChanged(sender As Object, e As EventArgs) Handles tbhasil.TextChanged

    End Sub

    Private Sub kali_Click(sender As Object, e As EventArgs) Handles kali.Click
        tbhasil.Text = Val(tb1.Text) * Val(tb2.Text)
    End Sub

    Private Sub bagi_Click(sender As Object, e As EventArgs) Handles bagi.Click
        tbhasil.Text = Val(tb1.Text) / Val(tb2.Text)
    End Sub

    Private Sub kurang_Click(sender As Object, e As EventArgs) Handles kurang.Click
        tbhasil.Text = Val(tb1.Text) - Val(tb2.Text)
    End Sub

    Private Sub ulang_Click(sender As Object, e As EventArgs) Handles ulang.Click
        tbhasil.Text = ""
        tb1.Text = ""
        tb2.Text = ""

    End Sub

    Private Sub keluar_Click(sender As Object, e As EventArgs) Handles keluar.Click
        End
    End Sub
End Class
