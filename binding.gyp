{
  "targets": [
    {
      "target_name": "etherdream",
      "sources": [ "src/node-etherdream.cc", "deps/j4cDAC/driver/libetherdream/etherdream.c"],
      'include_dirs': [
        "deps/j4cDAC/driver/libetherdream",
        "deps/j4cdac/common"
      ],
    }
  ]
}
