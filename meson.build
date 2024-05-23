project(
  'c_ed_list',
  'c',
  version: '0.1',
  default_options: ['warning_level=3'],
)

subdir('src/listEncCircu')
subdir('src/listDupEnc')

executable(
  'main',
  'src/main.c',
  install: true,
  link_with: [list_enc_circu, list_dup_enc]
)