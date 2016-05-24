from distutils.core import setup, Extension

hellopy = Extension('hellopy',
                           sources = ['hellopy.c'])

setup(name = 'hellopy',
      version = '0.1',
      description = 'Python Package with Hello World C Extension',
      ext_modules = [hellopy],

      url='https://github.com/cfauchard',
      author='Christophe Fauchard',
      author_email='christophe.fauchard@gmail.com')
