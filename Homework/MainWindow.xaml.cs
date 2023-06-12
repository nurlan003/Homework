using Microsoft.Win32;
using Newtonsoft.Json;
using System.IO;
using System.Windows;
using System.Windows.Controls;

namespace HomeWork
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }



        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            string text = myText.Text;
            SaveFileDialog saveDialog = new SaveFileDialog();
            saveDialog.Filter = "JSON Dosyaları|*.json|Tüm Dosyalar|*.*";
            bool? result = saveDialog.ShowDialog();

            // Kullanıcı Kaydet'e tıkladıysa devam et
            if (result == true)
            {
                // Dosya yolu
                string filePath = saveDialog.FileName;

                string json = JsonConvert.SerializeObject(text, Formatting.Indented);
                File.WriteAllText(filePath, json);
            }
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.Filter = "JSON Files|*.json|All Files|*.*";
            bool? result = openFileDialog.ShowDialog();

            if (result == true)
            {
                string filePath = openFileDialog.FileName;

                // JSON dosyasını oku
                string json = File.ReadAllText(filePath);

                // JSON'dan veriyi çıkar
                string text = JsonConvert.DeserializeObject<string>(json);

                // Çıkarılan veriyi TextBox'a yerleştir
                myText.Text = text;
                PathName.Text =filePath;
            }
        }
    }
}
