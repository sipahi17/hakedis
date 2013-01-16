#include <QApplication>
#include "hakedis.h"

bool veritabaniDosyasiMevcutMu()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("hakedis.db");
    if (!db.open())
    {
        QMessageBox::warning(0, QObject::tr("Veritabani Dosyasi Acilamiyor"),db.lastError().text());
        return false;
    }
    return true;
}

//BOŞ VERİTABANI DOSYASI OLUŞTURUYOR
void veritabaniOlustur()
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    QSqlQuery query;
    query.exec("create table iskalemi(ik_id integer primary key not null, ik_no varchar, ik_aciklama varchar, ik_birim varchar, ik_teklif varchar)");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.01','EL İLE YUMUŞAK TOPRAK KAZILMASI','M3', '5.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.02','KAZI ALANI İÇİNE RASTLAYAN FUNDALARIN KESİLMESİ VE TEMİZLENMESİ. (100 M2)','100M2','95.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.03','KAZI VE DOLGU ALANLARINDA MAKİNA İLE TEMİZLEME VE SÖKME İŞİ YAPILMASI. (100 M2)','100M2','100.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.04','ø=5-10 CM AĞAÇ KESİLMESİ,KÖKLERİNİN AYIKLANMASI','AD','1.75')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.05','ø=11-20 CM AĞAÇ KESİLMESİ,KÖKLERİNİN AYIKLANMASI','AD','3.50')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.06','ø=21-30 CM AĞAÇ KESİLMESİ,KÖKLERİNİN AYIKLANMASI','AD','4.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.07','ø=31-40 CM AĞAÇ KESİLMESİ,KÖKLERİNİN AYIKLANMASI','AD','4.80')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.08','ø=41-50 CM AĞAÇ KESİLMESİ,KÖKLERİNİN AYIKLANMASI','AD','15.20')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.09','ø=51-60 CM AĞAÇ KESİLMESİ,KÖKLERİNİN AYIKLANMASI','AD','22.80')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.10','MAKİNA İLE YUMUŞAK VE SERT TOPRAK KAZISI','M3','2.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.11','ÇİM SAHA TANZİMİNDE TOPRAĞIN EL İLE TIRMIKLANMASI','100 M2','5.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.12','YUMUŞAK TOPRAKLARIN 20-25 CM.DERİNLİKTE BELLENMESİ','DA','140.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.13','SERT TOPRAKLARIN 20-25 CM.DERİNLİKTE BELLENMESİ','DA','150.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.14','TOPRAĞIN ÇAPALANMASI','DA','104.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.15','FİDAN DİPLERİNİN 50.CM ÇAPINDA ÇAPALANMASI','B/AD','250.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.16','FİDAN DİPLERİNİN 80 cm ÇAPINDA ÇAPALANMASI','AD','0.30')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.17','ORTA REFÜJLERDE FİDAN DİPLERİNİN 80 cm ÇAPINDA ÇAPALANMASI','AD','0.80')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.18','YUM. TOPR.DA EL İLE 20 CM ÇAP. 25 CM DER. FİDAN ÇUKURU AÇILMASI','B/AD','200.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.19','YUM. TOPR.DA EL İLE 30 CM ÇAP. 40 CM DER. FİDAN ÇUKURU AÇILMASI','B/AD','250.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.20','YUM. TOPR.DA EL İLE 40 CM ÇAP. 50 CM DER. FİDAN ÇUKURU AÇILMASI','B/AD','300.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.21','YUM. TOPR.DA EL İLE 50 CM ÇAP. 60 CM DER. FİDAN ÇUKURU AÇILMASI','B/AD','350.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.22','SERT VE ÇAKILLI TOPR.DA 20 CM ÇAP 25 CM DER.DE EL İLE FİDAN ÇUKURU AÇILMASI','B/AD','2000.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.23','SERT VE ÇAKILLI TOPR.DA 30 CM ÇAP 40 CM DER.DE EL İLE FİDAN ÇUKURU AÇILMASI','B/AD','2000.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.24','SERT VE ÇAKILLI TOPR.DA 40 CM ÇAP 50CM DER.DE EL İLE FİDAN ÇUKURU AÇILMASI','B/AD','2000.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.25','SERT VE ÇAKILLI TOPR.DA 50 CM ÇAP 60 CM DER.DE EL İLE FİDAN ÇUKURU AÇILMASI','B/AD','2000..00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.26','ÇİM VE ÇİÇEKLİK SAHALARIN TANZİMİ','DA','450.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.27','ÇUKURLARA İBRELİ FİD.TOPRAKLI DİKİMİ (ÇAP 20 CM -DER. 25CM)','B/AD','300.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.28','ÇUKURLARA YAPRAKLI FİD.VE ÇALI. TOPRAKSIZ DİK.(ÇAP30-DER40CM)','B/AD','300.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.29','ÇUKURLARA YAPRAKLI FİD.VE ÇALI.TOPRAKSIZ DİK.(ÇAP40-DER50CM)','B/AD','300.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.30','ÇUKURLARA YAPRAKLI FİD. VE ÇALI. TOPRAKSIZ DİK.(ÇAP50-DER60CM)','B/AD','300.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.31','KAVAKLARDA 2M.YE KADAR BUDAMA VE TEPE TASHİHİ','B/AD','300.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.32','YAPRAKLI AĞAÇLARIN YAN DALLARININ BUDAMA VE TEPE TACI YAPMA','AD','3.90')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.33','PARKLARDA ÇİT NEBATLARINA FORM VERİLMESİ','M2','0.50')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.34','ÇİM VE ÇİÇEKLİK SAHALARDA YABANİ OTLARIN TEMİZLİĞİ','DA','30.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.35','MAKAS İLE ÇİM VEYA ÇAYIR BİÇME','M2','0.50')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.36','TIRPAN İLE ÇİM VEYA ÇAYIR BİÇME','DA','20.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.37','TOPRAĞIN GÜBRELENMESİ','TON','10.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.38','BİTKİSEL TOPRAĞIN TEMİNİ','M3','10.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.39','10-15CM. KALINLIKTA BİTKİSEL TOPRAK SERİLMESİ','M3','7.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.40','100LT.LİK EL.ÇEK.MOTORLU PÜLV.İLE 5LT.MAHL.TATB.(ÇEV:0-30CM)','AD','0.20')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.41','100LT.LİK EL.ÇEK.MOTORLU PÜLV.İLE 10L. MAHL. TATB.(ÇEV:30-40C)','AD','0.30')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.42','PARK ALANLARI VE YOLBOYU KAMULAŞTIRMA ALANLARININ TEMİZLENMESİ','DA','12.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.43','DEVRİLMİŞ AĞAÇLARIN KESİLEREK YOLDAN UZAKLAŞTIRILMASI','AD','6.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.44','AĞAÇLARA TEKLİ KAZIK ÇAKILMASI VE BAĞLANMASI','ADET','2.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.45','AĞAÇLARA İKİLİ  KAZIK ÇAKILMASI VE BAĞLANMASI','ADET','4.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.46','AĞAÇLARA ÜÇLÜ  KAZIK ÇAKILMASI VE BAĞLANMASI','ADET','2.40')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.47','AĞAÇLARA ALTTAN ÜÇLÜ HEREK YAPIMI VE BAĞLANMASI','ADET','6.40')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.48','Mevsimlik ve Çok Yıllık Çiçek Fidesi ve Otsu Bitki Dikimi','100 ADET','63.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.49','Makine İle Çim Çayır Biçme','DA','7.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.50','Çanak Yapılması','ADET','0.80')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.51','ATIK NAKLİ','TON','8.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.52','ARAZÖZ İLE SULAMA','TON','6.50')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.53','Çim Tohumu Temini ve Ekimi','M2','4.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.54','Hazır Rulo Çim Temini ve Ekimi','M2','7.00')");
    query.exec("insert into iskalemi(ik_no, ik_aciklama, ik_birim, ik_teklif) values('TBF.55','ŞANTİYE DIŞINA KAMYONLA KAZI MALZ. VE MOLOZ NAKLİ','TON','10.00')");
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bool veritabaniMevcut = !QFile::exists("hakedis.db");
    if (!veritabaniDosyasiMevcutMu())
    {
        return 1;
    }
    if (veritabaniMevcut)
    {
        veritabaniOlustur();
    }
    Hakedis w;
    w.show();
    
    return a.exec();
}
