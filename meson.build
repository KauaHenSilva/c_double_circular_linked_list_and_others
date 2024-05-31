project(
  'c_ed_list',
  'c',
  version: '1',
  default_options: ['warning_level=3'],
)

subdir('src/listDupEncCirc')
subdir('src/listEncCircu')
subdir('src/listDupEnc')

executable(
  'exemple',
  'src/exemple.c',
  install: true,
  link_with: [list_enc_circu, list_dup_enc, list_dup_enc_cir],
)