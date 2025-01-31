## GameBoy Advanceで動作するファミコンエミュレータ開発記

### 2002-08-30

InfoNES Advance (V0_Hazuki版) をリリースしました．

_(2023-03-11) 海外のエミュレータ作者は，Christmas releaseやValentine's day releaseを出すことが当時ありました．
その真似をして，8月なので，葉月(Hazuki)というリリースを出してみました．
あるエミュレータ紹介サイトで，「葉月(Hazuki)は，日本語で8月の意味」と説明されていて，少し嬉しかった記憶があります．_

### 2023-03-06

古いファイルを整理していたら，GameBoy Advance(以下，GBA)で動作するファミコンエミュのソースとバイナリが出てきたので，[GitHub](https://github.com/jay-kumogata/InfoNES/tree/master/gba)の方に上げておきました．
写真は，VirtualBoy Advance(GBAエミュ)の上で動作する，InfoNES Advance(ファミコンエミュ)の上で動作する，CMC '99 Stars SE(デモ)です．

![](https://github.com/jay-kumogata/InfoNES/blob/master/screenshots/infones_gba.png)

### 2023-03-11

InfoNES Advanceが開発される経緯について，記憶を辿って記載しておきます．
2002年頃に，織田さんという方から連絡がありました．
「GBA開発機材をお貸しするので，InfoNESをGBAに移植してみませんか．」という内容でした．
当時は若かったので，安請け合いして，開発してみることにしました．
渋谷で織田さんという方にお会いして，実機と転送ケーブルをお借りしました．

開発は，[DevKitAdvance](https://devkitadv.sourceforge.net/)を利用しました．
すでにエミュレータが存在していたので，実機は不要でしたが，時々動作確認に使用しました．

InfoNES全体を移植すると，容量オーバーだったので，Mapper #1,#2,#3,#4を移植してみました．
大半はコンパイルするだけで動作しました．Advance向けに画面描画を書いただけです．
非常に遅かった記憶があります．その時点で，

- [PocketAdvance](http://nes.pocketheaven.com/)(loopy氏作)
- [ファミコンアドバンス](fca.ath.cx)(東大駒場祭り向けに開発された旨が記載されていた)

の実装が存在していました．両方共に，アセンブラで書かれてたので，実時間で動いていました．
特に，ファミコンアドバンスは，nesterをアセンブラで書き直したようで，精度が高かった記憶があります．
なので，InfoNES Advanceは，実験的な取り組みでした．
当時から，ゲーム機上でエミュレータを動かすことは，行われていました．
それが，バーチャルコンソールのようなサービスにつながったのでしょう(いい話で終わらせる作戦です)．
