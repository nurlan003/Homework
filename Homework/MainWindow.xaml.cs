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
            saveDialog.Filter = "JSON Files|*.json|All Files|*.*";
            bool? result = saveDialog.ShowDialog();

            if (result == true)
            {
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
                string json = File.ReadAllText(filePath);
                string text = JsonConvert.DeserializeObject<string>(json);
                myText.Text = text;
                PathName.Text =filePath;
            }
        }
    }
}
