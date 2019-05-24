# sprout 2019 C 班 大作業2 檔案壓縮
## 目標
寫出壓縮以及解壓縮的兩個程式，壓縮解壓縮方法可以參考投影片中的描述，但不一定要和助教的做法相同，只要是壓縮率能比助教的方法好就是好方法。
https://docs.google.com/presentation/d/1IMr2_kanSRoEtCkd4JjJgnI7dFJwvnj2d6jjH8HRWkY/edit?usp=sharing

## 檔案結構
```
..
├── checker
│   └── main.cpp
├── compress
│   ├── encode.cpp
│   ├── encode.h
│   └── main.cpp
├── decompress
│   ├── decode.cpp
│   ├── decode.h
│   └── main.cpp
├── README.md
└── testdata
    ├── sample1.txt
    └── sample2.txt
```

compress 資料夾中放的是你要完成的壓縮程式，助教已經幫你們寫好輸入輸出的部分，你們只要修改 encode.cpp 中的部分就行了。編譯之後的執行檔有一些參數：
 * windows<br>
假設 compress.exe是編譯好的執行檔，你可以在你的cmd執行以下的指令：
```
compress.exe %origin_data %encode_data
```
其中 %origin_data 代表原始資料， %encode_data 代表壓縮後的資料
 * linux<br>
有問題再來問助教吧

decompress資料夾中放的是你需要完成的解壓縮程式，同樣的助教已經幫你們寫好輸入輸出的部分，你們只要修改 decode.cpp 中的部分就行了。編譯之後的執行檔參數和壓縮程式類似：
* windows<br>
假設 decompress.exe是編譯好的執行檔，你可以在你的cmd執行以下的指令：
```
decompress.exe %encode_data %decode_data
```
其中 %encode_data 代表解壓縮前的資料，他會是壓縮程式的輸出檔， %decode_data 代表解壓縮後的資料，必須要和壓縮前完全相同。
 * linux<br>
有問題再問助教吧

checker 中放的是計算壓縮率的程式，他不會幫你計算壓縮的結果是不是對的但是可以幫你算壓縮的比例，用法如下：

* windows<br>
假設 checker.exe是編譯好的執行檔，你可以在你的cmd執行以下的指令：
```
checker.exe %origin_data %encode_data
```
其中 %origin_data 代表壓縮前的資料， %endcode_data 代表壓縮後的資料
 * linux<br>
有問題再問助教吧

## 示範
助教在testdata資料夾中放了兩個比較簡單的測試資料可以檢測以下為使用的示範(windows)：

假設你compress、decompress和checker都寫完且編譯完成了，而且都放在和程式碼相同的資料夾中，你想用`testdata\sample1.txt`進行測試，你可以打以下幾個指令：

cmd先切換到compress的資料夾中，執行
```
compress.exe ..\testdata\sample1.txt encode_sampel1.txt
```
你會發現compress的資料夾會多一個encode_sampel1.txt，那就是你壓縮的結果。

接著cmd切換到checker資料夾，執行
```
checker.exe ..\testdata\sample1.txt ..\compress\encode_sampel1.txt
```
如果你是按造助教的方式實做的話可能會在畫面上看到類似的答案
```
Your compression ratio is: 52.173%
```

至於解壓縮的部分，切換cmd到decompress資料夾，執行
```
decompress.exe ..\compress\encode_sampel1.txt decode_sampel1.txt
```
會發現你的decompress資料夾多了一個decode_sampel1.txt，那是你解壓縮的結果，理論上要和sample1.txt一模一樣。

## 提示

助教在程式碼中加了助教作法的提示，如果真的做不出來照著做也可以拿到60分基本分。剩下的40分我們會用隱藏測資幫各位測試並依造各位的ranking進行排序後算分。