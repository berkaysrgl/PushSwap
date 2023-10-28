# PushSwap
Argüman olarak girilen sayıları bana verilen belli fonksiyonlarla yapabildiğim kadarıyla en az adımda sıraladığım proje.

<img width="685" alt="Screen Shot 2023-10-28 at 5 22 54 PM" src="https://github.com/berkaysrgl/PushSwap/assets/149242814/b5ca4dc9-7429-4670-a959-31e8e7a67802">

V.1 Oyun kuralları
• Oyun a ve b isimli 2 yığın’dan oluşmaktadır. • Başlangıç olarak:
◦ a yığını rastgele sayıda birbirinin kopyası olmayan negative ve/veya pozitif sayıdan oluşmaktadır.
◦ b yığını boştur.
• Amaç yığındaki sayıları artan şekilde a yığınında sıralamaktır. • Bunu yapmak için aşağıdaki işlemleri kullanabilirsiniz:
sa : swap a -İlk 2 elementi a yığınının en üstüne çıkarır. Bir veya daha az eleman varsa hiçbir şey yapmaz.
sb : swap b -İlk 2 elementi b yığınının en üstüne çıkarır. Bir veya daha az eleman varsa hiçbir şey yapmaz.
ss : sa ve sb aynı anda kullanılır.
pa : push a - b yığınının en üstteki ilk elemanını a yığının en üstüne yerleştirir. b
boşsa hiçbir şey yapmaz.
pb : push b -a yığınının en üstteki ilk elemanını b yığının en üstüne yerleştirir. a boşsa hiçbir şey yapmaz.
ra : rotate a - a yığınının tüm elemanlarını 1 üste taşır. İlk eleman son eleman haline gelir.
rb : rotate b - b yığınının tüm elemanlarını 1 üste taşır. İlk eleman son eleman haline gelir.
rr : ra ve rb aynı anda kullanılır.
rra : reverse rotate a - a yığınının tüm elemanlarını 1 alta taşır. Son eleman ilk eleman haline gelir.
rrb : reverse rotate b - b yığınının tüm elemanlarını 1 alta taşır. Son eleman ilk eleman haline gelir.
rrr : rra ve rrb aynı anda kullanılır.
